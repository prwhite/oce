// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignApprovalAssignment_HeaderFile
#define _StepAP214_AutoDesignApprovalAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignApprovalAssignment_HeaderFile
#include <Handle_StepAP214_AutoDesignApprovalAssignment.hxx>
#endif

#ifndef _Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem.hxx>
#endif
#ifndef _StepBasic_ApprovalAssignment_HeaderFile
#include <StepBasic_ApprovalAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_Approval_HeaderFile
#include <Handle_StepBasic_Approval.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepAP214_HArray1OfAutoDesignGeneralOrgItem;
class StepBasic_Approval;
class StepAP214_AutoDesignGeneralOrgItem;



class StepAP214_AutoDesignApprovalAssignment : public StepBasic_ApprovalAssignment {

public:

  //! Returns a AutoDesignApprovalAssignment <br>
  Standard_EXPORT   StepAP214_AutoDesignApprovalAssignment();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Approval)& aAssignedApproval) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_Approval)& aAssignedApproval,const Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem)& aItems) ;
  
  Standard_EXPORT     void SetItems(const Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem)& aItems) ;
  
  Standard_EXPORT     Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem Items() const;
  
  Standard_EXPORT     StepAP214_AutoDesignGeneralOrgItem ItemsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbItems() const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignApprovalAssignment)

protected:




private: 


Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem items;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
