// hkpGenericConstraintDataScheme (Physics/Dynamics/Constraint/ConstraintKit/hkpGenericConstraintScheme.h), 0x40 bytes:
// the command stream an hkpGenericConstraintData runs, with its parameters, modifiers and motors.
// The layout is the game's (reflection hkpGenericConstraintDataSchemeClass, 5 members; the destructor 82D801A8
// destroys the four hkArrays in reverse order). The finish constructor is out of line
// (??0hkpGenericConstraintDataScheme@@QAA@VhkFinishLoadedObjectFlag@@@Z, 82DA5F38): when finishing it resets m_info to
// the header size (16) and rebuilds it from m_commands (fn_82DC1250). The default constructor is inline
// (in hkpGenericConstraintData's, 82D9DFD8): it clears m_info and adds the 16-byte header to m_sizeOfSchemas. That
// unit still keeps a local copy: neither this form nor the same stores in the data's constructor body reproduce
// its scheduling, so the exact form of the inline constructor is not confirmed.
#ifndef HAVOK_HKPGENERICCONSTRAINTDATASCHEME_H
#define HAVOK_HKPGENERICCONSTRAINTDATASCHEME_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintData.h"

class hkpConstraintModifier;
class hkpConstraintMotor;

class hkpGenericConstraintDataScheme {
public:
    hkpGenericConstraintDataScheme()
    {
        m_info.clear();
        m_info.m_sizeOfSchemas += 16;
    }
    hkpGenericConstraintDataScheme(hkFinishLoadedObjectFlag f);
    ~hkpGenericConstraintDataScheme();

    hkpConstraintInfo m_info;                       // +0x0
    hkArray<hkVector4> m_data;                      // +0x10
    hkArray<int> m_commands;                        // +0x1C
    hkArray<hkpConstraintModifier *> m_modifiers;   // +0x28
    hkArray<hkpConstraintMotor *> m_motors;         // +0x34
};

#endif
