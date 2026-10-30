extern "C" char *_getptd();
extern "C" bool _IsExceptionObjectToBeDestroyed(void *p) {
 struct Node { void *p; int unk; Node *next; };
 Node *n = *(Node **)(_getptd()+0x94);
 while (n) { if (n->p == p) return false; n = n->next; }
 return true;
}
