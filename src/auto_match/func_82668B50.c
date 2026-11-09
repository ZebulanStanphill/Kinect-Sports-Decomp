typedef struct Owner_82668B50 { int pad; void *p; int pad8; char data[1]; } Owner_82668B50;
extern void fn_82668E40(void *, void *, unsigned);

void fn_82668B50(Owner_82668B50 *self)
{
    fn_82668E40(self->data, self->p, 1);
}
