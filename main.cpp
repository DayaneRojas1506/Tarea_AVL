#include "BST.h"
#include "AVL.h"
#include <iostream>
using namespace std;

int main() {

    BSTree<int> BST;
    AVLTree<int> AVL;

    int array[] = {10, 5, 20, 2, 8, 15, 30};
    int array2[] = {10, 5, 20, 2, 8, 15, 30};

    cout << "    ==========================     " << endl;
    cout << "----|     **   BST   **      |-----" << endl;
    cout << "    ==========================     " << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Insertando nodo : " << array[i] << endl;
        BST.insert(array[i]);
        cout << "==  Arbol actual  ==" << endl;
        BST.print();
        cout << "====================" << endl;
    }

    cout << "- MinValue : " << BST.minValue() << endl;
    cout << "- MaxValue : " << BST.maxValue() << endl;
    cout << "- Recorrido InOrder : " << BST.inOrder() << endl;
    cout << "- Recorrido PostOrder : " << BST.postOrder() << endl;
    cout << "- Recorrido PreOrder : " << BST.preOrder() << endl;
    cout << "- Sucesor de 8 : " << BST.successor(8) << endl;
    cout << "- Predecesor de 5 : " << BST.predecessor(5) << endl;
    cout << "- "; BST.BreadthFirstSearch();
    cout << "- "; BST.DepthFirstSearch();
    cout << "=====================" << endl;
    cout << "- Eliminando nodo 8 " << endl;
    BST.remove(8);
    BST.print();
    cout << "=====================" << endl;

    cout << "- Eliminando nodo 20 (Se reemplaza por el predecesor) " << endl;
    BST.remove(20);
    BST.print();
    cout << "=====================" << endl;


  cout << "    ==========================     " << endl;
  cout << "----|     **   AVL   **      |-----" << endl;
  cout << "    ==========================     " << endl;

  for (int i = 0; i < 7; i++) {
    cout << "Insertando nodo : " << array2[i] << endl;
    AVL.insert(array2[i]);
    cout << "==  Arbol actual  ==" << endl;
    AVL.print();
    cout << "====================" << endl;
  }
    cout << "- MinValue : " << AVL.minValue() << endl;
    cout << "- MaxValue : " << AVL.maxValue() << endl;
    cout << "- Recorrido InOrder : " << AVL.inOrder() << endl;
    cout << "- Recorrido PostOrder : " << AVL.postOrder() << endl;
    cout << "- Recorrido PreOrder : " << AVL.preOrder() << endl;
    cout << "- Sucesor de 8 : " << AVL.successor(8) << endl;
    cout << "- Predecesor de 5 : " << AVL.predecessor(5) << endl;
   
    cout << "=====================" << endl;
    cout << "- Eliminando nodo 8 " << endl;
    AVL.remove(8);
    AVL.print();
    cout << "=====================" << endl;

    cout << "- Eliminando nodo 20 (Se reemplaza por el predecesor) " << endl;
    AVL.remove(20);
    AVL.print();
    cout << "=====================" << endl;

    return 0;
}
