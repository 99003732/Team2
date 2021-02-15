# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Distance conversion- Converting unit distances from one input to the other|  10metre | 32.8 | 32.8 |Requirement based |
|  H_02       |Password Protection for Calculator| correct pin|regular operation of calculator|Operation continued further|Scenario based    |
|  H_03       |Area and Perimeter computation | 1 |choose shape| choose shape |Requirement based   |
|  H_04       |Area and Perimeter computation | 2 | choose shape|choose shape|Requirement based  |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Metre to Inch Conversion | 1 metre | 39.3701 inch | 39.3701 inch | Requirement based |
|  L_02       |Metre to Foot Conversion | 20 metre | 65.6168 foot | 65.6168 foot |Requirement based |
|  L_03       |Writing the PIN to a local tect file so it is saved even after exiting program|  PIN|PIN saved to permanent memory|PIN saved to permanent memory|scenario based based    |
|  L-04       |Checking of PIN with saved pin | correct pin | reading from text file and acceptance | acceptance of pin|scenario based |
|  L_04       |Area computation for Circle|Radius value in cm = 1|3.1428|3.1428|Initial boundary based|
|  L_05       |Area computation for square|Side value in cm = 1|1|1|Initial boundary based    |
|  L_06       |Perimeter computation for Square|Radius value in cm = 1|4|4|Initial boundary based    |
|  L_08       |Perimeter computation for Rectangle|Radius value in cm = 1|4|4|Initial boundary based    |
