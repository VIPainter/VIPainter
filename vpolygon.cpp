#include "vpolygon.h"
#include "vpoint.h"
#include "QDebug"

VPolygon::VPolygon(){
}

VPolygon::~VPolygon(){
}

VPolygon::VPolygon(const VPolygon &shape){

    for(auto &i : shape.vertex){
        this->vertex.append(i);
    }
}


