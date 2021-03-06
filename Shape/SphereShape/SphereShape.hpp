#ifndef		__PARTICLE_SYSTEM_SPHERE_SHAPE_HPP__
# define	__PARTICLE_SYSTEM_SPHERE_SHAPE_HPP__

#include	"Shape.hpp"

namespace	ParticleSystem
{
  class   SphereShape : public Shape
  {
  public:
    SphereShape(float = 1.0f, bool = false, bool = false, bool = true);
    ~SphereShape(void);

  protected:
    SphereShape(Shape::Type, float = 1.0f, bool = false, bool = false, bool = true);

  public:
    virtual void	apply(glm::vec3 &, glm::vec3 &);
    
  public:
    float		getRadius(void) const { return this->_radius; }
    bool		getEmitFromShell(void) const { return this->_emitFromShell; }
    
  public:
    void		setRadiusTo(float radius) { this->_radius = radius; }
    void		setEmitFromShellTo(bool emitFromShell) { this->_emitFromShell = emitFromShell; }

  protected:
    float		_radius;
    bool		_emitFromShell;
  };
}

#endif /* !__PARTICLE_SYSTEM_SPHERE_SHAPE_HPP__ */
