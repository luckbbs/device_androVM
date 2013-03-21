#ifndef DISPATCHER_HPP_
#define DISPATCHER_HPP_

#include "global.hpp"

class Dispatcher {

public:
  Dispatcher(void);
  ~Dispatcher(void);

private:
  Dispatcher(const Dispatcher &);
  Dispatcher operator=(const Dispatcher &);

  void treatePing(const Request &request, Reply *reply);
  void unknownRequest(const Request &request, Reply *reply);

public:
  Reply *dispatchRequest(const Request &request);

};

#endif