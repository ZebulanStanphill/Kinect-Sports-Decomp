struct Meta {int pad[2];unsigned n;};struct Array {void **data;int pad;Meta *meta;};struct Object {int pad[2];Array array;};
extern "C" void fn_82897600(Object *object,void *value,unsigned i){Array *a=&object->array;if(i<a->meta->n)a->data[i]=value;}
