extern int fn_82BD7AE8();
typedef struct Nd_82BD8860 { struct Nd_82BD8860 *p0; struct Nd_82BD8860 *next; } Nd_82BD8860;
typedef struct Q_82BD8860 { Nd_82BD8860 *head; Nd_82BD8860 *tail; } Q_82BD8860;

void fn_82BD8860(int param_1,int *param_2)
{
  int iVar1;
  int iVar2;
  Q_82BD8860 *q;
  Nd_82BD8860 *n = (Nd_82BD8860 *)param_2;
  
  iVar1 = *param_2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 2;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -2;
  iVar2 = fn_82BD7AE8(*(unsigned int *)(param_1 + 0x19c),2,iVar1);
  if (iVar2 < 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 2;
  }
  else {
    q = (Q_82BD8860 *)(param_1 + 0x190);
    n->next = 0;
    if (q->tail != 0) {
      q->tail->next = n;
    }
    else {
      q->head = n;
    }
    q->tail = n;
  }
}
