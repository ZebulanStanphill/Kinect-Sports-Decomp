struct Node { int f0; void *x4; };
extern "C" void fn_82694D70(Node *n);
struct Handle_826A65E8 {
    Node *node;
    bool equals(const Handle_826A65E8 &o) const;
};
bool Handle_826A65E8::equals(const Handle_826A65E8 &o) const
{
    if (o.node->x4 == 0)
        fn_82694D70(o.node);
    return node->x4 == o.node->x4;
}
