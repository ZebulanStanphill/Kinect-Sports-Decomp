// hkVersionRegistry::hkVersionRegistry() (hkVersionRegistry.cpp): the updaters are the static linked list (lbl_832760A0), counted once for the capacity and once for the size.
#include "havok/hkBase.h"
#include "havok/hkVersionRegistry.h"

hkVersionRegistry::hkVersionRegistry()
    : m_updaters(const_cast<const Updater **>(lbl_832760A0), countStaticUpdaters(), countStaticUpdaters()) {}
