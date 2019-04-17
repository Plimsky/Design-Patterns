#include "FactoryModel.h"
#include "TreeModel.h"
#include <cassert>

int main()
{
    FactoryModel factory{};
    auto tree = factory.GetModel<TreeModel>("Tree_1");

    assert(typeid(tree) == typeid(TreeModel));

    return 0;
}
