/*
  This file is part of the Modbus library.
  Copyright (c) 2018 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _MODBUS_TCP_CLIENT_H_INCLUDED
#define _MODBUS_TCP_CLIENT_H_INCLUDED

#include <Client.h>
#include <IPAddress.h>

#include "ModbusClient.h"

class ModbusTCPClient : public ModbusClient {
public:
  ModbusTCPClient(Client& client);
  virtual ~ModbusTCPClient();

  int begin(IPAddress ip, uint16_t port = 502);
  void end();

private:
  Client* _client;
};

#endif