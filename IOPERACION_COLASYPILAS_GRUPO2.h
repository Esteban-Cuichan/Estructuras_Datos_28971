#ifndef IOPERACION_COLASYPILAS_GRUPO2_H
#define IOPERACION_COLASYPILAS_GRUPO2_H

#include "Nodo.h"
class IOperacion_ColasYPilas_Grupo2 {
public:
    virtual bool buscarPilasColas(const std::string& cedula) = 0;
};
#endif