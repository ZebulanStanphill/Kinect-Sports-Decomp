// hkpTyremarkPoint (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h, where Havok declares it with
// hkpTyremarksWheel), 0x20 bytes: the left and right edge of a tyre mark at one point. The tyremark units
// (82DF9270, 82DF92F0, 82DFA278, 82DFA8D0) read the two vectors at +0x0 and +0x10. The member names follow
// Havok's header.
//
// The game has it in two forms: as a plain struct, and with a user-declared destructor, which makes
// hkArray<hkpTyremarkPoint> destroy its elements one by one (82DFA760 keeps that form locally).
#ifndef HAVOK_HKPTYREMARKPOINT_H
#define HAVOK_HKPTYREMARKPOINT_H

#include "havok/hkVector4.h"

struct hkpTyremarkPoint {
    hkVector4 m_pointLeft;    // +0x0
    hkVector4 m_pointRight;   // +0x10
};

#endif
