// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_SelectInt_HeaderFile
#define _StepData_SelectInt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepData_SelectInt_HeaderFile
#include <Handle_StepData_SelectInt.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _StepData_SelectMember_HeaderFile
#include <StepData_SelectMember.hxx>
#endif


//! A SelectInt is a SelectMember specialised for a basic integer <br>
//!           type in a select which also accepts entities : this one has <br>
//!           NO NAME. <br>
//!           For a named select, see SelectNamed <br>
class StepData_SelectInt : public StepData_SelectMember {

public:

  
  Standard_EXPORT   StepData_SelectInt();
  
  Standard_EXPORT   virtual  Standard_Integer Kind() const;
  
  Standard_EXPORT   virtual  void SetKind(const Standard_Integer kind) ;
  
  Standard_EXPORT   virtual  Standard_Integer Int() const;
  
  Standard_EXPORT   virtual  void SetInt(const Standard_Integer val) ;




  DEFINE_STANDARD_RTTI(StepData_SelectInt)

protected:




private: 


Standard_Integer thekind;
Standard_Integer theval;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
