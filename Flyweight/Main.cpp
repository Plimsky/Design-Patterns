#include "FactoryModel.h"
#include "TreeModel.h"
#include "Tree.h"
#include <iostream>
#include <cassert>

int main()
{
    FactoryModel factory{};

    auto firTree1 = Tree{factory.GetModel<TreeModel>("Fir_Tree")};
    auto firTree2 = Tree{factory.GetModel<TreeModel>("Fir_Tree")};
    auto oakTree  = Tree{factory.GetModel<TreeModel>("Oak_Tree")};

    assert(typeid(firTree1.GetModel()) == typeid(TreeModel));
    assert(&firTree1.GetModel() == &firTree2.GetModel());

    std::cout << "There is " << factory.GetSize() << " models in the factory\n";

    assert(factory.GetSize() == 2);

    return 0;
}
