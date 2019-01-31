class BST{
	public:
		bool search(int value) const;
		int min() const;
		bool insert(int value);

	private:
		class BSTNode{
			public:
				 int data;
				 BSTNode* left;
				 BSTNode* right;
 				 BSTNode* parent;
		};
		BSTNode* root;
}
