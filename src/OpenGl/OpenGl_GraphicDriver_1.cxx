// Created on: 2011-10-20
// Created by: Sergey ZERCHANINOV
// Copyright (c) 2011-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#include <OpenGl_GraphicDriver.hxx>

#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>

#include <OpenGl_CView.hxx>
#include <OpenGl_Display.hxx>

//=======================================================================
//function : Begin
//purpose  :
//=======================================================================

Standard_Boolean OpenGl_GraphicDriver::Begin (const Handle(Aspect_DisplayConnection)& theDisplayConnection)
{
  myDisplayConnection = theDisplayConnection;
  try
  {
    openglDisplay = new OpenGl_Display (myDisplayConnection);
    return Standard_True;
  }
  catch (Standard_Failure)
  {
  }
  return Standard_False;
}

//=======================================================================
//function : End
//purpose  : 
//=======================================================================

void OpenGl_GraphicDriver::End ()
{
  // This is unsafe to realease global object here
  // because noone guaranteed that only one instance of OpenGl_GraphicDriver is used!
  // So we disable this destructor here until openglDisplay not moved to  OpenGl_GraphicDriver class definition.
  ///openglDisplay.Nullify();
}
