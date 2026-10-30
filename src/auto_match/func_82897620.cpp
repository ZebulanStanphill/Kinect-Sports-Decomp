struct Meta {int pad[2];unsigned n;};struct Array {void **data;int pad;Meta *meta;};struct Object {int pad[2];Array array;};
extern "C" void *fn_82897620(Object *object,unsigned i){Array *a=&object->array;return i<a->meta->n?a->data[i]:0;}
