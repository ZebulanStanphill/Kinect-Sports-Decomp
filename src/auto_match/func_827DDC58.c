extern long _InterlockedIncrement(long *);

typedef struct Pred_827DDC58 Pred_827DDC58;
typedef struct PredVt_827DDC58 {
    unsigned char (*accept)(Pred_827DDC58 *self, int id);
} PredVt_827DDC58;
struct Pred_827DDC58 {
    PredVt_827DDC58 *vt;
};

typedef struct Gen_827DDC58 {
    int pad0;
    long next;
} Gen_827DDC58;

int fn_827DDC58(Gen_827DDC58 *self, Pred_827DDC58 *pred)
{
    int id;

    do {
        id = _InterlockedIncrement(&self->next) - 1;
    } while (!pred->vt->accept(pred, id));
    return id;
}
