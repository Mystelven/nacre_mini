/***************************************************************************************************
* Copyright (c) 2018 Artois University & CNRS
*
* This file is part of Nacre_mini
*
* Nacre_mini is free software: you can redistribute it and/or modify it 
* under the terms of the GNU General Public License as published by the Free Software Foundation, 
* either version 3 of the License, or (at your option) any later version.
*
* Nacre_mini is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with Nacre_mini. 
* If not, see http://www.gnu.org/licenses/.
*
* Contributors:
*       - Gaël Glorian (glorian@cril.fr)

***************************************************************************************************/

/*
 * @CreateTime: Dec 4, 2017 3:49 PM
 * @Author: Gaël Glorian
 * @Contact: glorian@cril.fr
 * @Last Modified By: Gaël Glorian
 * @Last Modified Time: May 7, 2018 5:56 PM
 * @Description: Modify Here, Please 
 */

#ifndef LECOUTRECOMPLETESOLVER_H_
#define LECOUTRECOMPLETESOLVER_H_

#include "CompleteSolver.hh"

class LecoutreNoGoodsManager;

class LecoutreCompleteSolver : public CompleteSolver {
protected:
    LecoutreNoGoodsManager* manager;

public:
    ///Constructor
    LecoutreCompleteSolver(Problem* p)
        : CompleteSolver(p)
        , manager(nullptr){};

    /// Launch the main search loop
    int search(int zeroing = 0);

    /// Print the final informations
    int showFinal(int res);
};
#endif // LECOUTRECOMPLETESOLVER_H_
