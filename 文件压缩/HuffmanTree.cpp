#pragma once
#include"FileComepressHuffM.h"
#include<vector>
#include<queue>
#include<iostream>

template<class W>
struct HuffmanTreeNode{
	HuffmanTreeNode(const W& weight)
	:_weight(weight)
	, _pleft(nullptr)
	, _pright(nullptr){}

	HuffmanTreeNode<W>* _pleft;
	HuffmanTreeNode<W>* _pright;

	W _weight;

};

//·Âº¯Êý£º


template<class W>
class HuffmanTree{
	typedef HuffmanTreeNode<W> Node;
	typedef Node* pNode;
public:
	HuffmanTree()
		:_pRoot(nullptr){}
	void CreateHuffmanTree(const std::vector<W>& v){
		if (v.empty()){
			return;
		}
		priority_queue<pNode> q;
		
		for (size_t i = 0; i < v.size(); ++i){
			q.push(new Node(v[i]));
		}
	}
	pNode _pRoot;
};