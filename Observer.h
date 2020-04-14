//
// Created by Andrea on 4/12/2020.
//

#ifndef POWERANALYSER_OBSERVER_H
#define POWERANALYSER_OBSERVER_H

class Observer {
public:
    virtual ~Observer() {}

    virtual void updateMode() = 0;
    virtual void updateDevice() = 0;


};

#endif //POWERANALYSER_OBSERVER_H
