#include <iostream>

enum ItemTypes
{
    ITEM_HEALTH,
    ITEM_TORCH,
    ITEM_ARROW,
    MAX_ITEMS
};
int countTotalItems(int *items)
{
    int totalItems = 0;
    for (int item = 0; item < MAX_ITEMS; ++item)  
    {
        totalItems += items[item];
    }
    return totalItems;
}
void h6ex1()
{
    // int items[] {3, 6, 12};
    int items[MAX_ITEMS] {3, 6, 12};
    
    std::cout << "The player has " << countTotalItems(items) << " items in total.\n";
}
