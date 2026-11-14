/* hkpConstraintData::addInstance(hkpConstraintInstance *constraint, hkpConstraintRuntime *runtime,
   int sizeOfRuntime) const: slot 0x2c of every hkp*ConstraintData vtable; clears the runtime
   (fn_82CFC060 is hkString::memSet). */
extern void fn_82CFC060(void *dst, int value, int size);

void fn_82D9AB08(const void *self, void *constraint, void *runtime, int sizeOfRuntime)
{
    if (runtime != 0) {
        fn_82CFC060(runtime, 0, sizeOfRuntime);
    }
}
