typedef struct Node_82669B88 Node_82669B88;
extern char *fn_82F953A8(Node_82669B88 *);
extern Node_82669B88 **fn_82F953B8(Node_82669B88 *);
extern Node_82669B88 **fn_82F92208(Node_82669B88 *);
extern Node_82669B88 *fn_82669AC8(Node_82669B88 *);
Node_82669B88 **fn_82669B88(Node_82669B88 **it)
{
    if (*fn_82F953A8(*it) != 0) {
    } else if (*fn_82F953A8(*fn_82F953B8(*it)) == 0) {
        *it = fn_82669AC8(*fn_82F953B8(*it));
    } else {
        Node_82669B88 *pnode;
    again:
        pnode = *fn_82F92208(*it);
        if (*fn_82F953A8(pnode) == 0) {
            if (*it == *fn_82F953B8(pnode)) {
                *it = pnode;
                goto again;
            }
        }
        *it = pnode;
    }
    return it;
}
