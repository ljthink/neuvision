#ifndef Z3D_CORE___ZAPPLICATION_H
#define Z3D_CORE___ZAPPLICATION_H

#include "zcore_global.h"

#include <QApplication>

namespace Z3D {

class Z3D_CORE_SHARED_EXPORT ZApplication : public QApplication
{
public:
    ZApplication(int &argc, char **argv);
};

} // namespace Z3D

#endif // Z3D_CORE___ZAPPLICATION_H
