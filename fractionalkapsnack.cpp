#include <iostream>

using namespace std;

struct Item {
    int value;
    int weight;
    double ratio;
};

void swapItems(Item& item1, Item& item2) {
    Item temp = item1;
    item1 = item2;
    item2 = temp;
}

double fractionalKnapsack(int capacity, Item items[], int n) {
    // calculate ratio for each item
    for (int i = 0; i < n; i++) {
        items[i].ratio = (double)items[i].value / (double)items[i].weight;
    }

    // sort items in decreasing order of ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j+1].ratio) {
                swapItems(items[j], items[j+1]);
            }
        }
    }

    double max_value = 0.0;

    // fill knapsack with items
    for (int i = 0; i < n; i++) {
        if (capacity == 0)
            break;

        if (items[i].weight <= capacity) {
            capacity -= items[i].weight;
            max_value += items[i].value;
        } else {
            double fraction = (double)capacity / (double)items[i].weight;
            max_value += (double)items[i].value * fraction;// mane max_value + (double)items[i].value * fraction hocche
            capacity = 0;
        }
    }

    return max_value;
}

int main() {
    Item items[] = {
        {60, 10, 0.0},
        {100, 20, 0.0},
        {120, 30, 0.0}
    };
    int n = sizeof(items)/sizeof(items[0]);

    for (int i = 0; i < n; i++) {
        items[i].ratio = (double)items[i].value / (double)items[i].weight;
    }

    int capacity = 50;

    double max_value = fractionalKnapsack(capacity, items, n);

    cout << "Maximum value: " << max_value << endl;

    return 0;
}
