//
// Created by gpereira on 4/29/18.
//

#ifndef SINF_MOTE_H
#define SINF_MOTE_H

#include <string>
#include <vector>
#include "Sensor.h"

class Mote {
public:
  std::string name;
  int room_id;

  int CheckRoom(int m_id);
};


#endif //SINF_MOTE_H
