typedef struct Tnode{
  int data;
  struct Tnode *lchild,*rchild;
} BSTnode, *BSTnode;

BSTree SearchBST(BSTree root, int key, BSTree *father)
{
  BSTree p = root;
  *father = NULL;
  while(p&&p->data!=key){
    *father = p;
    if(key< p ->data) p = p->lchild;
    else p = p->rchild;
  }
  return p;
}

int InsertBST(BSTree *root,int newkey)
{
  BSTree s,p,f;
  s=(BSTree)malloc(sizeof(BSTnode));
  if(!s) return -1;
  s->data = newkey;
  s->lchild = NULL;
  s->rchild = NULL;
  p = SearchBST(*root,newkey,&f);
  if(p) return -1;
  if(!f) *root =s;
  else if(newkey<f->data) f->lchild = s;
  else f->rchild = s;
  return 0;
}
