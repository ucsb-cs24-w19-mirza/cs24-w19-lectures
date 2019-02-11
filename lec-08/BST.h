#ifndef BST_H
#define BST_H
class BST{
	public:
		BST(){root = nullptr;}
		bool search(int key) const;
		int min() const;
		int max() const;
		//Post condition: returns the next largest key if one exists
		//otherwise return key
		int successor(int key) const;
		bool insert(int key);

	private:
		class BSTNode{
			public:
				 int data;
				 BSTNode* left;
				 BSTNode* right;
 				 BSTNode* parent;
		};
		BSTNode* _search(int value) const;
		BSTNode* _successor(BSTNode* key) const;
		BSTNode* root;
};

#endif
