#ifndef IOPERACION_COLA_H
#define IOPERACION_COLA_H
#include "Persona.h"
#include <string>

class IOPERACION_COLA {
public:
    virtual ~IOPERACION_COLA() {} 
               
    virtual bool buscar(const std::string& cedulaBuscar) = 0;
};
#endif