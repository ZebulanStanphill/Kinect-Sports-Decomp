typedef struct Node_82662AE8 Node_82662AE8;
extern char *fn_82F953A8(Node_82662AE8 *);
extern Node_82662AE8 **fn_82F953B8(Node_82662AE8 *);
extern Node_82662AE8 **fn_8265D5A8(Node_82662AE8 *);
extern Node_82662AE8 **fn_82F92208(Node_82662AE8 *);
extern Node_82662AE8 *fn_826612A8(Node_82662AE8 *);
Node_82662AE8 **fn_82662AE8(Node_82662AE8 **it)
{
    if (*fn_82F953A8(*it) != 0) {
        *it = *fn_82F953B8(*it);
    } else if (*fn_82F953A8(*fn_8265D5A8(*it)) == 0) {
        *it = fn_826612A8(*fn_8265D5A8(*it));
    } else {
        Node_82662AE8 *pnode;
    again:
        pnode = *fn_82F92208(*it);
        if (*fn_82F953A8(pnode) == 0) {
            if (*it == *fn_8265D5A8(pnode)) {
                *it = pnode;
                goto again;
            }
        }
        if (*fn_82F953A8(*it) != 0) {
        } else {
            *it = pnode;
        }
    }
    return it;
}
