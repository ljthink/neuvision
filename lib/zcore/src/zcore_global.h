#ifndef Z3D_CORE___GLOBAL_H
#define Z3D_CORE___GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(Z3D_CORE_LIBRARY)
#  define Z3D_CORE_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define Z3D_CORE_SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // Z3D_CORE___GLOBAL_H
