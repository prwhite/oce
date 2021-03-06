// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_FieldList_HeaderFile
#define _StepData_FieldList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class StepData_Field;
class Interface_EntityIterator;


//! Describes a list of fields, in a general way <br>
//!           This basic class is for a null size list <br>
//!           Subclasses are for 1, N (fixed) or Dynamic sizes <br>
class StepData_FieldList  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates a FieldList of 0 Field <br>
  Standard_EXPORT   StepData_FieldList();
  //! Returns the count of fields. Here, returns 0 <br>
  Standard_EXPORT   virtual  Standard_Integer NbFields() const;
  //! Returns the field n0 <num> between 1 and NbFields (read only) <br>
  Standard_EXPORT   virtual const StepData_Field& Field(const Standard_Integer num) const;
  //! Returns the field n0 <num> between 1 and NbFields, in order to <br>
//!           modify its content <br>
  Standard_EXPORT   virtual  StepData_Field& CField(const Standard_Integer num) ;
  //! Fills an iterator with the entities shared by <me> <br>
  Standard_EXPORT     void FillShared(Interface_EntityIterator& iter) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
