// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ShellFaceSet_HeaderFile
#define _BOP_ShellFaceSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Solid_HeaderFile
#include <TopoDS_Solid.hxx>
#endif
#ifndef _BOP_ShapeSet_HeaderFile
#include <BOP_ShapeSet.hxx>
#endif
class TopoDS_Solid;


//! class for set of faces and shells <br>
//! <br>
class BOP_ShellFaceSet  : public BOP_ShapeSet {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
//! Empty  Consreuctor <br>
  Standard_EXPORT   BOP_ShellFaceSet();
  
//! Creates the object to build blocks of faces <br>
//! connected by edges. <br>
  Standard_EXPORT   BOP_ShellFaceSet(const TopoDS_Solid& theSolid);
  
//! Selector <br>
       const TopoDS_Solid& Solid() const;





protected:





private:



TopoDS_Solid mySolid;


};


#include <BOP_ShellFaceSet.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif