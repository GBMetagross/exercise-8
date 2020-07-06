#include "BST.cpp"

int main()
{

	BST testTree;

	testTree.insert(50);
	testTree.insert(30);
	testTree.insert(90);
	testTree.insert(100);


	BST testTree2;

	//testTree2 = testTree;

	//testTree.print();
	testTree2.print();

	BST testTree3(testTree);

	testTree3.print();
	
}
