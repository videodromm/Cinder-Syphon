# Cinder-Syphon

An implementation of the Syphon framework for Cinder
Anatomy:

example-Basic - contains a simple Syphon example
example-SyphonServerDirectory - a server directory example
lib - the framework and namebound client
src - the Cinder implementation

Objects:

Syphon Client - Receive frames from a Syphon server
Syphon Server - Publish frames to Syphon
Syphon Server Directory - Browse available Syphon servers

Requires Mac OS X 10.7+ and Cinder 0.9.0+

To add Syphon to your project:

 - Drag the Cinder-Syphon blocks folder into your project (like any other Cinder block)
 - Add a Copy Files build phase to new projects to copy the Syphon framework (in the /lib folder) into the Frameworks folder of the built product.

The included examples demonstrate these steps.

Use any Syphon-enabled application to send or receive frames. You can use the [Syphon Demo Apps](http://code.google.com/p/syphon-implementations/downloads/detail?name=Syphon%20Demo%20Apps%20Public%20Beta%202.dmg) to test functionality.

libcinder.org
syphon.v002.info/

Syphon Framework License:

Copyright 2013 bangnoise (Tom Butterworth) & vade (Anton Marini).
Cinder and Openframeworks implementation by astellato (Anthony Stellato).
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.

* Neither the name of the Syphon Project nor the names of its contributors
may be used to endorse or promote products derived from this software
without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
