typedef struct Node_828C2248 { unsigned p0[10]; char *f28; unsigned f2c; } Node_828C2248;
typedef struct Out_828C2248 { char *p; unsigned rc; } Out_828C2248;
extern void fn_822315A0(unsigned);
extern unsigned char fn_8223AAC0(unsigned);
extern void fn_828A1958(Node_828C2248 **);

Out_828C2248 *fn_828C2248(Out_828C2248 *param_1, int param_2, unsigned param_3)
{
  Node_828C2248 **head = *(Node_828C2248 ***)(*(int *)(param_2 + 4) + 4);
  Node_828C2248 *it = *head;
  while (it != (Node_828C2248 *)head) {
    if (*(unsigned *)(it->f28 + 4) == param_3) {
      Node_828C2248 *n2 = it;
      unsigned rc = n2->f2c;
      char *p = n2->f28;
      param_1->p = 0;
      param_1->rc = 0;
      if (rc != 0 && fn_8223AAC0(rc) != 0) {
        if (param_1->rc != 0) {
          fn_822315A0(param_1->rc);
        }
        param_1->rc = rc;
        param_1->p = p;
      }
      return param_1;
    }
    fn_828A1958(&it);
  }
  param_1->p = 0;
  param_1->rc = 0;
  return param_1;
}
