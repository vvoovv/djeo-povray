// POV-Ray 3.6 include file "Tree_10.inc"                                                                                                                                                // PoVRay 3.6 include File "wheel_000.inc"
// created by Friedrich A, Lohmueller, Dec-2005
// homepage: http://www.f-lohmueller.de/
// email: Friedrich.Lohmueller_aT_t-online.de
//------------------------------------------------------------------------
#ifndef( Tree_10_Inc_Temp)
#declare Tree_10_Inc_Temp = version;
#version 3.5;

//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------

#ifndef(Colors_Inc_Temp)
#include "colors.inc"                                             
#end
#ifndef(Textures_Inc_Temp)
#include "textures.inc"                                             
#end
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
#ifndef(  Tree_10_Texture)
#declare Tree_10_Texture = 
         texture { 
              pigment{ gradient <0,1,0> turbulence 1.5
                       color_map{
                          [0.0 color rgb<0.07,0.5,0.0>*0.8]
                          [0.2 color rgb<0.10,0.7,0.0>*0.8]
                          [0.4 color rgb<0.16,0.5,0.1>*0.8]
                          [0.6 color rgb<0.20,0.8,0.1>*0.5]
                          [0.7 color rgb<0.10,0.3,0.0>*0.8]
                          [0.9 color rgb<0.02,0.4,0.0>*0.6]
                          [1.0 color rgb<0.06,0.5,0.0>*0.8]
                         } // end of color_map                            
                        scale 0.1 
                      } // end of pigment                                     
              normal { bumps 0.5 scale 0.015} 
              finish { ambient 0.1 diffuse 0.85  phong 0.6}
            } // end of texture
#end


#ifndef(  Trunk_10_Texture)
#declare Trunk_10_Texture = 
         texture { pigment { color rgb<0.40,0.25,0.15>}
                   normal  { bumps 0.5 scale <0.005,0.25,0.005>}
                   finish  { ambient 0.15 diffuse 0.85 phong 0.5}
                 } // end of texture
#end

//-----------------------------------------------------------------------------/////////  
#declare Tree_10 =
union{
  
 isosurface {

  function{  sqrt(x*x + z*z) +0.25
              
             - abs(y/4.5) *1*(1-y)  
             - f_noise3d ( x*30, y*45*2.7, z*30 )*0.45 
          }

    contained_by {box {<-1,-1,-1>*1.25, < 1,-0.1, 1>*1.25}}
    accuracy 0.002
    max_gradient 22

    translate <0,1.25,0> 
    scale 1.6 * <1,2,1>
    texture{ Tree_10_Texture }  
    translate <0,0.25,0> 
  } // end of isosurface -----------------------


 cylinder{ <0,-1,0>,<0,1.0,0>,0.15 
           texture{ Trunk_10_Texture }  

  } // end of cylinder ------------------------- 
} // end of union -------------------------------------- end of Tree ------------////////
// --------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------
// end of object ------------------------------------------------------// end of object
 


//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
// sample: 
/*
//----------------------------------------------------------------------------- textures
/* // alternative texture declarations: 
#declare Tree_10_Texture = 
         texture { 
              pigment{ gradient <0,1,0> turbulence 1.5
                       color_map{
                          [0.0 color rgb<0.07,0.5,0.0>]
                          [0.2 color rgb<0.10,0.7,0.0>]
                          [0.4 color rgb<0.16,0.5,0.1>]
                          [0.6 color rgb<0.20,0.8,0.1>]
                          [0.7 color rgb<0.10,0.3,0.0>]
                          [0.9 color rgb<0.02,0.4,0.0>]
                          [1.0 color rgb<0.06,0.5,0.0>]
                         } // end of color_map                            
                        scale 0.1 
                      } // end of pigment                                     
              normal { bumps 0.5 scale 0.015} 
              finish { ambient 0.1 diffuse 0.85  phong 0.6}
            } // end of texture
//--------------------------------------------------------------
#declare Trunk_10_Texture = 
         texture { pigment { color rgb<0.40,0.25,0.15>}
                   normal  { bumps 0.5 scale <0.005,0.25,0.005>}
                   finish  { ambient 0.15 diffuse 0.85 phong 0.5}
                 } // end of texture
//---------------------------------------------------------------
*/
//---------------------------------------------------------------------------------------
#include "Tree_10.inc" 
//-------------------------------------------------------------------------------------// 
object{ Tree_10 
        scale <1,1,1>*1
        rotate<0,0,0> 
        translate<0.00,0.00, 1.50>}
//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------
*/


#version Tree_10_Inc_Temp;
#end
//------------------------------------- end of include file

