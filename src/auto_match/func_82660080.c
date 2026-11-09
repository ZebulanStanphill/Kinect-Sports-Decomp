typedef struct Owner_82660080 { int pad; void *p; int pad8; char data[1]; } Owner_82660080;
extern void fn_82660558(void *, void *, unsigned);

void fn_82660080(Owner_82660080 *self)
{
    fn_82660558(self->data, self->p, 1);
}
