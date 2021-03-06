#ifndef KRAKENPOSE_H
#define KRAKENPOSE_H
#include <fstream>
namespace kraken_core
{
  static const int countState = 15;
  enum _state
  {
    _px=0,
    _py,
    _pz,
    
    _vx,
    _vy,
    _vz,
    
    _ax,
    _ay,
    _az,
    
    _w_roll,
    _w_pitch,
    _w_yaw,
    
    _roll,
    _pitch,
    _yaw
  };
  class KrakenPose
  {
    private:
      float _pose[countState];
    public:
      KrakenPose()
      {
        for(int i=0;i<countState;i++)
        {
            _pose[i]=0; 
        }
      }
      inline float* getData()
      {
        return &_pose[0];
      }
      
      void write(std::ostream &out);
  };
  
} // end kraken_core

#endif // KRAKENPOSE_H
