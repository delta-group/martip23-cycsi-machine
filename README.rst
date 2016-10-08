Cycsi - Single Cycle Virtual CPU
################################

COSC2325
********

Computer Architecture and Machine Language
==========================================

..  image:: https://travis-ci.org/delta-group/martip23-cycsi-machine.svg?branch=master

:Author: Patrick L. Martinez
:Date: 10/7/2016
:Version: 1.0

Forked from https://github.com/rblack42/Cycsi_v2

:Author: Roie R. Black
:Date: Sept 20, 2015
:Version: 0.1

This is an example machine developed to demonstrate aspects of modern processor
architecture. 

Installation
************

..  code-block:: text

    $ git clone https://github.com/delta-group/martip23-cycsi-machine
    $ cd martip23-cycsi-machine
    $ make 
    $ make test
    $ make run

Information
************

In /src/ you will find a test.data file. This is what is being input to the machine. Vanilla is 
.. code-block:: text

123
111
add
2
div
17
sub
2
mult
300

Push to stack per cycle should be

.. code-block:: text
123
111
234 = 123 + 111
2
117 = 234 / 2
17
100 = 117 - 17
2
200 = 100 * 2
300

