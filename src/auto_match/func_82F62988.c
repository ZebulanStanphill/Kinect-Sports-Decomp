typedef struct Node_82F62988 { struct Node_82F62988 *next; int val; } Node_82F62988;
extern Node_82F62988 *lbl_832632CC;
extern int atexit(void (*)(void));
extern void abort(void);
extern void fn_82F62928(void);
extern Node_82F62988 *fn_8265C9E0(int);

void fn_82F62988(int param_1)
{
  Node_82F62988 *mem;
  Node_82F62988 *n;
  Node_82F62988 *t;

  if (lbl_832632CC == 0 && atexit(fn_82F62928) != 0) {
    abort();
  }
  mem = fn_8265C9E0(8);
  if (mem != 0) {
    t = lbl_832632CC;
    mem->val = param_1;
    mem->next = t;
    n = mem;
  } else {
    n = 0;
  }
  lbl_832632CC = n;
}
