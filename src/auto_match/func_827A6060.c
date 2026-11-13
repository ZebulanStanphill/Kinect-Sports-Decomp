extern void fn_8278D2E0(int, int);
extern int fn_82790270(const char *, const char *, unsigned int);
extern char lbl_821AE24C[];
extern char lbl_8201178C[];

typedef struct Tok_827A6060 {
  int type;
  const char *str;
  unsigned int len;
} Tok_827A6060;
typedef struct TokList_827A6060 {
  Tok_827A6060 *toks;
  unsigned int n;
} TokList_827A6060;
typedef struct ObjList_827A6060 {
  int *data;
  unsigned int count;
} ObjList_827A6060;

void fn_827A6060(void *param_1, ObjList_827A6060 *list, TokList_827A6060 *tl)
{
  int idx;
  Tok_827A6060 *t;
  const char *s;
  unsigned int len, n;
  unsigned int i;

  idx = 0;
  if (tl->toks[0].type != 2 || (idx = 1, tl->n >= 2)) {
    t = tl->toks + idx;
    if (t->type == 0 || (t->type == 1 && t->len > 2)) {
      s = t->str;
      len = t->len;
      if (t->type == 1) {
        s = s + 2;
        len = len - 2;
      }
      n = len < 6 ? len : 6;
      if (fn_82790270(s, lbl_821AE24C, n) == 0) {
        for (i = 0; i < list->count; i++) fn_8278D2E0(list->data[i], 0);
      } else {
        n = len < 4 ? len : 4;
        if (fn_82790270(s, lbl_8201178C, n) == 0) {
          for (i = 0; i < list->count; i++) fn_8278D2E0(list->data[i], 1);
        }
      }
    }
  }
}
