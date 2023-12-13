# Weekly Report N°2 for RubbleScout Project
School year 2023-2024

## Project Overview
- **Title:** RubbleScout
- **Tagline:** "Navigating Chaos Saving Lives"
- **Student:** Lorenz CAZAUBON
- **Supervisor:** Pascal MASSON
- **Institution:** Ecole Polytechnique Universitaire de Nice Sophia-Antipolis, Robotics Specialty (Autonomous Systems)
- **Location:** 930 route des Colles, 06410 BIOT France

## Session Highlights
- Examined the circuit powering the lamp in more detail.
- Identified inability to vary lamp brightness using PWM; lack of information on certain electronic components.
- Temporary solution: Using a relay circuit for on/off functionality without variable brightness.
- Encountered challenges with PWM solution; no progress on lidar.
- Designed a circuit to control lidar movements.

## Next Steps
- Plan to complete 3D drawings of lidar motion controller using CAD software.
- Anticipate printing parts in the next session and testing them.
- Hope to receive the robot chassis for starting basic mechanics work.

## References
- [Video of electronic assembly (Fig 2)](link)
- [PDF file of circuit diagram (Fig 2)](link)
- [SVG file of lidar control circuit (Fig 3)](link)


```stl
   solid STLB ATF 12.14.0.127 COLOR=                                                      
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -25 -15 3
      vertex -25 -15 0
      vertex -26.11260414123535 -14.874639511108398 3
    endloop
  endfacet
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -26.11260414123535 -14.874639511108398 3
      vertex -25 -15 0
      vertex -26.11260414123535 -14.874639511108398 0
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -26.11260414123535 -14.874639511108398 3
      vertex -26.11260414123535 -14.874639511108398 0
      vertex -27.169418334960938 -14.504844665527344 3
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -27.169418334960938 -14.504844665527344 3
      vertex -26.11260414123535 -14.874639511108398 0
      vertex -27.169418334960938 -14.504844665527344 0
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -27.169418334960938 -14.504844665527344 3
      vertex -27.169418334960938 -14.504844665527344 0
      vertex -28.117448806762695 -13.909157752990723 3
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -28.117448806762695 -13.909157752990723 3
      vertex -27.169418334960938 -14.504844665527344 0
      vertex -28.117448806762695 -13.909157752990723 0
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -28.117448806762695 -13.909157752990723 3
      vertex -28.117448806762695 -13.909157752990723 0
      vertex -28.909156799316406 -13.117448806762695 3
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -28.909156799316406 -13.117448806762695 3
      vertex -28.117448806762695 -13.909157752990723 0
      vertex -28.909156799316406 -13.117448806762695 0
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -28.909156799316406 -13.117448806762695 3
      vertex -28.909156799316406 -13.117448806762695 0
      vertex -29.504844665527344 -12.169418334960938 3
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -29.504844665527344 -12.169418334960938 3
      vertex -28.909156799316406 -13.117448806762695 0
      vertex -29.504844665527344 -12.169418334960938 0
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -29.504844665527344 -12.169418334960938 3
      vertex -29.504844665527344 -12.169418334960938 0
      vertex -29.8746395111084 -11.112605094909668 3
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -29.8746395111084 -11.112605094909668 3
      vertex -29.504844665527344 -12.169418334960938 0
      vertex -29.8746395111084 -11.112605094909668 0
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -29.8746395111084 -11.112605094909668 3
      vertex -29.8746395111084 -11.112605094909668 0
      vertex -30 -10 3
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -30 -10 3
      vertex -29.8746395111084 -11.112605094909668 0
      vertex -30 -10 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -30 -10 0
      vertex -30 10 0
      vertex -30 -10 3
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex -30 -10 3
      vertex -30 10 0
      vertex -30 10 3
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -30 10 3
      vertex -30 10 0
      vertex -29.8746395111084 11.112605094909668 3
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -29.8746395111084 11.112605094909668 3
      vertex -30 10 0
      vertex -29.8746395111084 11.112605094909668 0
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -29.8746395111084 11.112605094909668 3
      vertex -29.8746395111084 11.112605094909668 0
      vertex -29.504844665527344 12.169418334960938 3
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -29.504844665527344 12.169418334960938 3
      vertex -29.8746395111084 11.112605094909668 0
      vertex -29.504844665527344 12.169418334960938 0
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -29.504844665527344 12.169418334960938 3
      vertex -29.504844665527344 12.169418334960938 0
      vertex -28.909156799316406 13.117448806762695 3
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -28.909156799316406 13.117448806762695 3
      vertex -29.504844665527344 12.169418334960938 0
      vertex -28.909156799316406 13.117448806762695 0
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -28.909156799316406 13.117448806762695 3
      vertex -28.909156799316406 13.117448806762695 0
      vertex -28.117448806762695 13.909157752990723 3
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -28.117448806762695 13.909157752990723 3
      vertex -28.909156799316406 13.117448806762695 0
      vertex -28.117448806762695 13.909157752990723 0
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -28.117448806762695 13.909157752990723 3
      vertex -28.117448806762695 13.909157752990723 0
      vertex -27.169418334960938 14.504844665527344 3
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -27.169418334960938 14.504844665527344 3
      vertex -28.117448806762695 13.909157752990723 0
      vertex -27.169418334960938 14.504844665527344 0
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -27.169418334960938 14.504844665527344 3
      vertex -27.169418334960938 14.504844665527344 0
      vertex -26.11260414123535 14.874639511108398 3
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -26.11260414123535 14.874639511108398 3
      vertex -27.169418334960938 14.504844665527344 0
      vertex -26.11260414123535 14.874639511108398 0
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -26.11260414123535 14.874639511108398 3
      vertex -26.11260414123535 14.874639511108398 0
      vertex -25 15 3
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -25 15 3
      vertex -26.11260414123535 14.874639511108398 0
      vertex -25 15 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -25 15 0
      vertex 25 15 0
      vertex -25 15 3
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -25 15 3
      vertex 25 15 0
      vertex 25 15 3
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 30 -10 3
      vertex 30 -10 0
      vertex 29.8746395111084 -11.112605094909668 3
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 29.8746395111084 -11.112605094909668 3
      vertex 30 -10 0
      vertex 29.8746395111084 -11.112605094909668 0
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 29.8746395111084 -11.112605094909668 3
      vertex 29.8746395111084 -11.112605094909668 0
      vertex 29.504844665527344 -12.169418334960938 3
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 29.504844665527344 -12.169418334960938 3
      vertex 29.8746395111084 -11.112605094909668 0
      vertex 29.504844665527344 -12.169418334960938 0
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex 29.504844665527344 -12.169418334960938 3
      vertex 29.504844665527344 -12.169418334960938 0
      vertex 28.909156799316406 -13.117448806762695 3
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex 28.909156799316406 -13.117448806762695 3
      vertex 29.504844665527344 -12.169418334960938 0
      vertex 28.909156799316406 -13.117448806762695 0
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 28.909156799316406 -13.117448806762695 3
      vertex 28.909156799316406 -13.117448806762695 0
      vertex 28.117448806762695 -13.909157752990723 3
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 28.117448806762695 -13.909157752990723 3
      vertex 28.909156799316406 -13.117448806762695 0
      vertex 28.117448806762695 -13.909157752990723 0
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 28.117448806762695 -13.909157752990723 3
      vertex 28.117448806762695 -13.909157752990723 0
      vertex 27.169418334960938 -14.504844665527344 3
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 27.169418334960938 -14.504844665527344 3
      vertex 28.117448806762695 -13.909157752990723 0
      vertex 27.169418334960938 -14.504844665527344 0
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 27.169418334960938 -14.504844665527344 3
      vertex 27.169418334960938 -14.504844665527344 0
      vertex 26.11260414123535 -14.874639511108398 3
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 26.11260414123535 -14.874639511108398 3
      vertex 27.169418334960938 -14.504844665527344 0
      vertex 26.11260414123535 -14.874639511108398 0
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 26.11260414123535 -14.874639511108398 3
      vertex 26.11260414123535 -14.874639511108398 0
      vertex 25 -15 3
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 25 -15 3
      vertex 26.11260414123535 -14.874639511108398 0
      vertex 25 -15 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -25 -15 3
      vertex 25 -15 3
      vertex -25 -15 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -25 -15 0
      vertex 25 -15 3
      vertex 25 -15 0
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 25 15 3
      vertex 25 15 0
      vertex 26.11260414123535 14.874639511108398 3
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 26.11260414123535 14.874639511108398 3
      vertex 25 15 0
      vertex 26.11260414123535 14.874639511108398 0
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 26.11260414123535 14.874639511108398 3
      vertex 26.11260414123535 14.874639511108398 0
      vertex 27.169418334960938 14.504844665527344 3
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 27.169418334960938 14.504844665527344 3
      vertex 26.11260414123535 14.874639511108398 0
      vertex 27.169418334960938 14.504844665527344 0
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 27.169418334960938 14.504844665527344 3
      vertex 27.169418334960938 14.504844665527344 0
      vertex 28.117448806762695 13.909157752990723 3
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 28.117448806762695 13.909157752990723 3
      vertex 27.169418334960938 14.504844665527344 0
      vertex 28.117448806762695 13.909157752990723 0
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 28.117448806762695 13.909157752990723 3
      vertex 28.117448806762695 13.909157752990723 0
      vertex 28.909156799316406 13.117448806762695 3
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 28.909156799316406 13.117448806762695 3
      vertex 28.117448806762695 13.909157752990723 0
      vertex 28.909156799316406 13.117448806762695 0
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 28.909156799316406 13.117448806762695 3
      vertex 28.909156799316406 13.117448806762695 0
      vertex 29.504844665527344 12.169418334960938 3
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 29.504844665527344 12.169418334960938 3
      vertex 28.909156799316406 13.117448806762695 0
      vertex 29.504844665527344 12.169418334960938 0
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex 29.504844665527344 12.169418334960938 3
      vertex 29.504844665527344 12.169418334960938 0
      vertex 29.8746395111084 11.112605094909668 3
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 2.235564740325855e-15
    outer loop
      vertex 29.8746395111084 11.112605094909668 3
      vertex 29.504844665527344 12.169418334960938 0
      vertex 29.8746395111084 11.112605094909668 0
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 2.3535833231744544e-15
    outer loop
      vertex 29.8746395111084 11.112605094909668 3
      vertex 29.8746395111084 11.112605094909668 0
      vertex 30 10 3
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex 30 10 3
      vertex 29.8746395111084 11.112605094909668 0
      vertex 30 10 0
    endloop
  endfacet
  facet normal -1 1.77635686587003e-16 0
    outer loop
      vertex 30 -10 3
      vertex 30 10 3
      vertex 30 -10 0
    endloop
  endfacet
  facet normal -1 1.77635686587003e-16 0
    outer loop
      vertex 30 -10 0
      vertex 30 10 3
      vertex 30 10 0
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -60 -77 3
      vertex -60 -77 0
      vertex -60.12535858154297 -78.11260223388672 3
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -60.12535858154297 -78.11260223388672 3
      vertex -60 -77 0
      vertex -60.12535858154297 -78.11260223388672 0
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -60.12535858154297 -78.11260223388672 3
      vertex -60.12535858154297 -78.11260223388672 0
      vertex -60.495155334472656 -79.16941833496094 3
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -60.495155334472656 -79.16941833496094 3
      vertex -60.12535858154297 -78.11260223388672 0
      vertex -60.495155334472656 -79.16941833496094 0
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -60.495155334472656 -79.16941833496094 3
      vertex -60.495155334472656 -79.16941833496094 0
      vertex -61.090843200683594 -80.11744689941406 3
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -61.090843200683594 -80.11744689941406 3
      vertex -60.495155334472656 -79.16941833496094 0
      vertex -61.090843200683594 -80.11744689941406 0
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -61.090843200683594 -80.11744689941406 3
      vertex -61.090843200683594 -80.11744689941406 0
      vertex -61.88254928588867 -80.9091567993164 3
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -61.88254928588867 -80.9091567993164 3
      vertex -61.090843200683594 -80.11744689941406 0
      vertex -61.88254928588867 -80.9091567993164 0
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -61.88254928588867 -80.9091567993164 3
      vertex -61.88254928588867 -80.9091567993164 0
      vertex -62.83058166503906 -81.50484466552734 3
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -62.83058166503906 -81.50484466552734 3
      vertex -61.88254928588867 -80.9091567993164 0
      vertex -62.83058166503906 -81.50484466552734 0
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -62.83058166503906 -81.50484466552734 3
      vertex -62.83058166503906 -81.50484466552734 0
      vertex -63.887393951416016 -81.87464141845703 3
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -63.887393951416016 -81.87464141845703 3
      vertex -62.83058166503906 -81.50484466552734 0
      vertex -63.887393951416016 -81.87464141845703 0
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -63.887393951416016 -81.87464141845703 3
      vertex -63.887393951416016 -81.87464141845703 0
      vertex -65 -82 3
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -65 -82 3
      vertex -63.887393951416016 -81.87464141845703 0
      vertex -65 -82 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -65 -82 0
      vertex -75 -82 0
      vertex -65 -82 3
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex -65 -82 3
      vertex -75 -82 0
      vertex -75 -82 3
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -75 -82 3
      vertex -75 -82 0
      vertex -76.11260223388672 -82.12535858154297 3
    endloop
  endfacet
  facet normal -0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex -76.11260223388672 -82.12535858154297 3
      vertex -75 -82 0
      vertex -76.11260223388672 -82.12535858154297 0
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -76.11260223388672 -82.12535858154297 3
      vertex -76.11260223388672 -82.12535858154297 0
      vertex -77.16941833496094 -82.49515533447266 3
    endloop
  endfacet
  facet normal -0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex -77.16941833496094 -82.49515533447266 3
      vertex -76.11260223388672 -82.12535858154297 0
      vertex -77.16941833496094 -82.49515533447266 0
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -77.16941833496094 -82.49515533447266 3
      vertex -77.16941833496094 -82.49515533447266 0
      vertex -78.11744689941406 -83.0908432006836 3
    endloop
  endfacet
  facet normal -0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex -78.11744689941406 -83.0908432006836 3
      vertex -77.16941833496094 -82.49515533447266 0
      vertex -78.11744689941406 -83.0908432006836 0
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -78.11744689941406 -83.0908432006836 3
      vertex -78.11744689941406 -83.0908432006836 0
      vertex -78.9091567993164 -83.88255310058594 3
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -78.9091567993164 -83.88255310058594 3
      vertex -78.11744689941406 -83.0908432006836 0
      vertex -78.9091567993164 -83.88255310058594 0
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -78.9091567993164 -83.88255310058594 3
      vertex -78.9091567993164 -83.88255310058594 0
      vertex -79.50484466552734 -84.83058166503906 3
    endloop
  endfacet
  facet normal -0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex -79.50484466552734 -84.83058166503906 3
      vertex -78.9091567993164 -83.88255310058594 0
      vertex -79.50484466552734 -84.83058166503906 0
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -79.50484466552734 -84.83058166503906 3
      vertex -79.50484466552734 -84.83058166503906 0
      vertex -79.87464141845703 -85.88739776611328 3
    endloop
  endfacet
  facet normal -0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex -79.87464141845703 -85.88739776611328 3
      vertex -79.50484466552734 -84.83058166503906 0
      vertex -79.87464141845703 -85.88739776611328 0
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -79.87464141845703 -85.88739776611328 3
      vertex -79.87464141845703 -85.88739776611328 0
      vertex -80 -87 3
    endloop
  endfacet
  facet normal -0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex -80 -87 3
      vertex -79.87464141845703 -85.88739776611328 0
      vertex -80 -87 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -80 -87 0
      vertex -80 -90 0
      vertex -80 -87 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -80 -87 3
      vertex -80 -90 0
      vertex -80 -90 3
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -26.11260414123535 14.874639511108398 0
      vertex -60 77 0
      vertex -25 15 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -25 15 0
      vertex -60 77 0
      vertex 60 77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -25 15 0
      vertex 60 77 0
      vertex 25 15 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 25 15 0
      vertex 60 77 0
      vertex 26.11260414123535 14.874639511108398 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 26.11260414123535 14.874639511108398 0
      vertex 60 77 0
      vertex 27.169418334960938 14.504844665527344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 27.169418334960938 14.504844665527344 0
      vertex 60 77 0
      vertex 28.117448806762695 13.909157752990723 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 28.117448806762695 13.909157752990723 0
      vertex 60 77 0
      vertex 28.909156799316406 13.117448806762695 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 28.909156799316406 13.117448806762695 0
      vertex 60 77 0
      vertex 29.504844665527344 12.169418334960938 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 29.504844665527344 12.169418334960938 0
      vertex 60 77 0
      vertex 29.8746395111084 11.112605094909668 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 29.8746395111084 11.112605094909668 0
      vertex 60 77 0
      vertex 30 10 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 30 10 0
      vertex 60 77 0
      vertex 60 -77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 30 10 0
      vertex 60 -77 0
      vertex 30 -10 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 30 -10 0
      vertex 60 -77 0
      vertex 29.8746395111084 -11.112605094909668 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 29.8746395111084 -11.112605094909668 0
      vertex 60 -77 0
      vertex 29.504844665527344 -12.169418334960938 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 29.504844665527344 -12.169418334960938 0
      vertex 60 -77 0
      vertex 28.909156799316406 -13.117448806762695 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 28.909156799316406 -13.117448806762695 0
      vertex 60 -77 0
      vertex 28.117448806762695 -13.909157752990723 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 28.117448806762695 -13.909157752990723 0
      vertex 60 -77 0
      vertex 27.169418334960938 -14.504844665527344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 27.169418334960938 -14.504844665527344 0
      vertex 60 -77 0
      vertex 26.11260414123535 -14.874639511108398 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 26.11260414123535 -14.874639511108398 0
      vertex 60 -77 0
      vertex 25 -15 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 25 -15 0
      vertex 60 -77 0
      vertex -60 -77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 25 -15 0
      vertex -60 -77 0
      vertex -25 -15 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -25 -15 0
      vertex -60 -77 0
      vertex -26.11260414123535 -14.874639511108398 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -26.11260414123535 -14.874639511108398 0
      vertex -60 -77 0
      vertex -27.169418334960938 -14.504844665527344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -27.169418334960938 -14.504844665527344 0
      vertex -60 -77 0
      vertex -28.117448806762695 -13.909157752990723 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -28.117448806762695 -13.909157752990723 0
      vertex -60 -77 0
      vertex -28.909156799316406 -13.117448806762695 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -28.909156799316406 -13.117448806762695 0
      vertex -60 -77 0
      vertex -29.504844665527344 -12.169418334960938 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -29.504844665527344 -12.169418334960938 0
      vertex -60 -77 0
      vertex -29.8746395111084 -11.112605094909668 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -29.8746395111084 -11.112605094909668 0
      vertex -60 -77 0
      vertex -30 -10 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -30 -10 0
      vertex -60 -77 0
      vertex -30 10 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -30 10 0
      vertex -60 -77 0
      vertex -60 77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -30 10 0
      vertex -60 77 0
      vertex -29.8746395111084 11.112605094909668 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -29.8746395111084 11.112605094909668 0
      vertex -60 77 0
      vertex -29.504844665527344 12.169418334960938 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -29.504844665527344 12.169418334960938 0
      vertex -60 77 0
      vertex -28.909156799316406 13.117448806762695 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -28.909156799316406 13.117448806762695 0
      vertex -60 77 0
      vertex -28.117448806762695 13.909157752990723 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -28.117448806762695 13.909157752990723 0
      vertex -60 77 0
      vertex -27.169418334960938 14.504844665527344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -27.169418334960938 14.504844665527344 0
      vertex -60 77 0
      vertex -26.11260414123535 14.874639511108398 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 89.1529541015625 0
      vertex 62.83058166503906 81.50484466552734 0
      vertex 67.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.30000305175781 89.80000305175781 0
      vertex 62.83058166503906 81.50484466552734 0
      vertex 61.88254928588867 80.9091567993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.30000305175781 89.80000305175781 0
      vertex 61.88254928588867 80.9091567993164 0
      vertex 67.38518524169922 90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 90.4470443725586 0
      vertex 61.88254928588867 80.9091567993164 0
      vertex 61.090843200683594 80.11744689941406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 90.4470443725586 0
      vertex 61.090843200683594 80.11744689941406 0
      vertex 70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 61.090843200683594 80.11744689941406 0
      vertex 60.495155334472656 79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 60.495155334472656 79.16941833496094 0
      vertex -60.495155334472656 79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.495155334472656 79.16941833496094 0
      vertex 60.495155334472656 79.16941833496094 0
      vertex -60.12535858154297 78.11260223388672 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.12535858154297 78.11260223388672 0
      vertex 60.495155334472656 79.16941833496094 0
      vertex 60.12535858154297 78.11260223388672 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.12535858154297 78.11260223388672 0
      vertex 60.12535858154297 78.11260223388672 0
      vertex -60 77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60 77 0
      vertex 60.12535858154297 78.11260223388672 0
      vertex 60 77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 62.83058166503906 81.50484466552734 0
      vertex 67.38518524169922 89.1529541015625 0
      vertex 63.887393951416016 81.87464141845703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 63.887393951416016 81.87464141845703 0
      vertex 67.38518524169922 89.1529541015625 0
      vertex 67.63493347167969 88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 63.887393951416016 81.87464141845703 0
      vertex 67.63493347167969 88.55000305175781 0
      vertex 65 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 65 82 0
      vertex 67.63493347167969 88.55000305175781 0
      vertex 68.03223419189453 88.03223419189453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 65 82 0
      vertex 68.03223419189453 88.03223419189453 0
      vertex 68.55000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 68.55000305175781 87.63493347167969 0
      vertex 69.1529541015625 87.38518524169922 0
      vertex 65 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 65 82 0
      vertex 69.1529541015625 87.38518524169922 0
      vertex 69.80000305175781 87.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 65 82 0
      vertex 69.80000305175781 87.30000305175781 0
      vertex 75 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 82 0
      vertex 69.80000305175781 87.30000305175781 0
      vertex 70.4470443725586 87.38518524169922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 82 0
      vertex 70.4470443725586 87.38518524169922 0
      vertex 71.05000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.05000305175781 87.63493347167969 0
      vertex 71.56776428222656 88.03223419189453 0
      vertex 75 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 82 0
      vertex 71.56776428222656 88.03223419189453 0
      vertex 71.9650650024414 88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 82 0
      vertex 71.9650650024414 88.55000305175781 0
      vertex 76.11260223388672 82.12535858154297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.11260223388672 82.12535858154297 0
      vertex 71.9650650024414 88.55000305175781 0
      vertex 72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.11260223388672 82.12535858154297 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 77.16941833496094 82.49515533447266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 77.16941833496094 82.49515533447266 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 78.11744689941406 83.0908432006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 78.11744689941406 83.0908432006836 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 78.9091567993164 83.88255310058594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 78.9091567993164 83.88255310058594 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 79.50484466552734 84.83058166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.50484466552734 84.83058166503906 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 79.87464141845703 85.88739776611328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.87464141845703 85.88739776611328 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 80 87 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 87 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 80 90 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 90 0
      vertex 72.21481323242188 89.1529541015625 0
      vertex 72.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 90 0
      vertex 72.30000305175781 89.80000305175781 0
      vertex 79.84807586669922 91.73648071289062 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.84807586669922 91.73648071289062 0
      vertex 72.30000305175781 89.80000305175781 0
      vertex 72.21481323242188 90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.84807586669922 91.73648071289062 0
      vertex 72.21481323242188 90.4470443725586 0
      vertex 79.39692687988281 93.42020416259766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.39692687988281 93.42020416259766 0
      vertex 72.21481323242188 90.4470443725586 0
      vertex 78.6602554321289 95 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 78.6602554321289 95 0
      vertex 72.21481323242188 90.4470443725586 0
      vertex 77.66044616699219 96.4278793334961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 77.66044616699219 96.4278793334961 0
      vertex 72.21481323242188 90.4470443725586 0
      vertex 71.9650650024414 91.05000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 77.66044616699219 96.4278793334961 0
      vertex 71.9650650024414 91.05000305175781 0
      vertex 76.4278793334961 97.66044616699219 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.4278793334961 97.66044616699219 0
      vertex 71.9650650024414 91.05000305175781 0
      vertex 71.56776428222656 91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.4278793334961 97.66044616699219 0
      vertex 71.56776428222656 91.56776428222656 0
      vertex 75 98.6602554321289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 98.6602554321289 0
      vertex 71.56776428222656 91.56776428222656 0
      vertex 73.42020416259766 99.39692687988281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 73.42020416259766 99.39692687988281 0
      vertex 71.56776428222656 91.56776428222656 0
      vertex 71.05000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 73.42020416259766 99.39692687988281 0
      vertex 71.05000305175781 91.9650650024414 0
      vertex 71.73648071289062 99.84807586669922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.73648071289062 99.84807586669922 0
      vertex 71.05000305175781 91.9650650024414 0
      vertex 70.4470443725586 92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.73648071289062 99.84807586669922 0
      vertex 70.4470443725586 92.21481323242188 0
      vertex 70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 70.4470443725586 92.21481323242188 0
      vertex 69.80000305175781 92.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 69.80000305175781 92.30000305175781 0
      vertex 69.1529541015625 92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 69.1529541015625 92.21481323242188 0
      vertex 68.55000305175781 91.9650650024414 0
      vertex 70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 68.55000305175781 91.9650650024414 0
      vertex 68.03223419189453 91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 100 0
      vertex 68.03223419189453 91.56776428222656 0
      vertex 67.63493347167969 91.05000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.63493347167969 91.05000305175781 0
      vertex 67.38518524169922 90.4470443725586 0
      vertex 70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -80 90 0
      vertex -72.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.30000305175781 89.80000305175781 0
      vertex -80 90 0
      vertex -79.84807586669922 91.73648071289062 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.30000305175781 89.80000305175781 0
      vertex -79.84807586669922 91.73648071289062 0
      vertex -72.21481323242188 90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 90.4470443725586 0
      vertex -79.84807586669922 91.73648071289062 0
      vertex -79.39692687988281 93.42020416259766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 90.4470443725586 0
      vertex -79.39692687988281 93.42020416259766 0
      vertex -78.6602554321289 95 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.9650650024414 88.55000305175781 0
      vertex -76.11260223388672 82.12535858154297 0
      vertex -72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -76.11260223388672 82.12535858154297 0
      vertex -77.16941833496094 82.49515533447266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -77.16941833496094 82.49515533447266 0
      vertex -78.11744689941406 83.0908432006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.11260223388672 82.12535858154297 0
      vertex -71.9650650024414 88.55000305175781 0
      vertex -75 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 82 0
      vertex -71.9650650024414 88.55000305175781 0
      vertex -71.56776428222656 88.03223419189453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 82 0
      vertex -71.56776428222656 88.03223419189453 0
      vertex -71.05000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.05000305175781 87.63493347167969 0
      vertex -70.4470443725586 87.38518524169922 0
      vertex -75 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 82 0
      vertex -70.4470443725586 87.38518524169922 0
      vertex -69.80000305175781 87.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 82 0
      vertex -69.80000305175781 87.30000305175781 0
      vertex -65 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 82 0
      vertex -69.80000305175781 87.30000305175781 0
      vertex -69.1529541015625 87.38518524169922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 82 0
      vertex -69.1529541015625 87.38518524169922 0
      vertex -68.55000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -68.55000305175781 87.63493347167969 0
      vertex -68.03223419189453 88.03223419189453 0
      vertex -65 82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 82 0
      vertex -68.03223419189453 88.03223419189453 0
      vertex -67.63493347167969 88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 82 0
      vertex -67.63493347167969 88.55000305175781 0
      vertex -63.887393951416016 81.87464141845703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -63.887393951416016 81.87464141845703 0
      vertex -67.63493347167969 88.55000305175781 0
      vertex -67.38518524169922 89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -63.887393951416016 81.87464141845703 0
      vertex -67.38518524169922 89.1529541015625 0
      vertex -62.83058166503906 81.50484466552734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -62.83058166503906 81.50484466552734 0
      vertex -67.38518524169922 89.1529541015625 0
      vertex -67.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -62.83058166503906 81.50484466552734 0
      vertex -67.30000305175781 89.80000305175781 0
      vertex -61.88254928588867 80.9091567993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.88254928588867 80.9091567993164 0
      vertex -67.30000305175781 89.80000305175781 0
      vertex -67.38518524169922 90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.88254928588867 80.9091567993164 0
      vertex -67.38518524169922 90.4470443725586 0
      vertex -61.090843200683594 80.11744689941406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.090843200683594 80.11744689941406 0
      vertex -67.38518524169922 90.4470443725586 0
      vertex -70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.090843200683594 80.11744689941406 0
      vertex -70 100 0
      vertex -60.495155334472656 79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.495155334472656 79.16941833496094 0
      vertex -70 100 0
      vertex 70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -67.38518524169922 90.4470443725586 0
      vertex -67.63493347167969 91.05000305175781 0
      vertex -70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 100 0
      vertex -67.63493347167969 91.05000305175781 0
      vertex -68.03223419189453 91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 100 0
      vertex -68.03223419189453 91.56776428222656 0
      vertex -68.55000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -68.55000305175781 91.9650650024414 0
      vertex -69.1529541015625 92.21481323242188 0
      vertex -70 100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 100 0
      vertex -69.1529541015625 92.21481323242188 0
      vertex -69.80000305175781 92.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 100 0
      vertex -69.80000305175781 92.30000305175781 0
      vertex -70.4470443725586 92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 100 0
      vertex -70.4470443725586 92.21481323242188 0
      vertex -71.73648071289062 99.84807586669922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.73648071289062 99.84807586669922 0
      vertex -70.4470443725586 92.21481323242188 0
      vertex -71.05000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.73648071289062 99.84807586669922 0
      vertex -71.05000305175781 91.9650650024414 0
      vertex -73.42020416259766 99.39692687988281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -73.42020416259766 99.39692687988281 0
      vertex -71.05000305175781 91.9650650024414 0
      vertex -71.56776428222656 91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -73.42020416259766 99.39692687988281 0
      vertex -71.56776428222656 91.56776428222656 0
      vertex -75 98.6602554321289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 98.6602554321289 0
      vertex -71.56776428222656 91.56776428222656 0
      vertex -76.4278793334961 97.66044616699219 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.4278793334961 97.66044616699219 0
      vertex -71.56776428222656 91.56776428222656 0
      vertex -71.9650650024414 91.05000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.4278793334961 97.66044616699219 0
      vertex -71.9650650024414 91.05000305175781 0
      vertex -77.66044616699219 96.4278793334961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -77.66044616699219 96.4278793334961 0
      vertex -71.9650650024414 91.05000305175781 0
      vertex -72.21481323242188 90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -77.66044616699219 96.4278793334961 0
      vertex -72.21481323242188 90.4470443725586 0
      vertex -78.6602554321289 95 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 -90.4470443725586 0
      vertex 61.88254928588867 -80.9091567993164 0
      vertex 67.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.30000305175781 -89.80000305175781 0
      vertex 61.88254928588867 -80.9091567993164 0
      vertex 62.83058166503906 -81.50484466552734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.30000305175781 -89.80000305175781 0
      vertex 62.83058166503906 -81.50484466552734 0
      vertex 67.38518524169922 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 -89.1529541015625 0
      vertex 62.83058166503906 -81.50484466552734 0
      vertex 63.887393951416016 -81.87464141845703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 -89.1529541015625 0
      vertex 63.887393951416016 -81.87464141845703 0
      vertex 67.63493347167969 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.63493347167969 -88.55000305175781 0
      vertex 63.887393951416016 -81.87464141845703 0
      vertex 65 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.63493347167969 -88.55000305175781 0
      vertex 65 -82 0
      vertex 68.03223419189453 -88.03223419189453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 68.03223419189453 -88.03223419189453 0
      vertex 65 -82 0
      vertex 68.55000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 68.55000305175781 -87.63493347167969 0
      vertex 65 -82 0
      vertex 69.1529541015625 -87.38518524169922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 69.1529541015625 -87.38518524169922 0
      vertex 65 -82 0
      vertex 69.80000305175781 -87.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 69.80000305175781 -87.30000305175781 0
      vertex 65 -82 0
      vertex 75 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 69.80000305175781 -87.30000305175781 0
      vertex 75 -82 0
      vertex 70.4470443725586 -87.38518524169922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70.4470443725586 -87.38518524169922 0
      vertex 75 -82 0
      vertex 71.05000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.05000305175781 -87.63493347167969 0
      vertex 75 -82 0
      vertex 71.56776428222656 -88.03223419189453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.56776428222656 -88.03223419189453 0
      vertex 75 -82 0
      vertex 71.9650650024414 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.9650650024414 -88.55000305175781 0
      vertex 75 -82 0
      vertex 76.11260223388672 -82.12535858154297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.9650650024414 -88.55000305175781 0
      vertex 76.11260223388672 -82.12535858154297 0
      vertex 72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 76.11260223388672 -82.12535858154297 0
      vertex 77.16941833496094 -82.49515533447266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 77.16941833496094 -82.49515533447266 0
      vertex 78.11744689941406 -83.0908432006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.63493347167969 -91.05000305175781 0
      vertex 70 -100 0
      vertex 67.38518524169922 -90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 -90.4470443725586 0
      vertex 70 -100 0
      vertex 61.090843200683594 -80.11744689941406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.38518524169922 -90.4470443725586 0
      vertex 61.090843200683594 -80.11744689941406 0
      vertex 61.88254928588867 -80.9091567993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 67.63493347167969 -91.05000305175781 0
      vertex 68.03223419189453 -91.56776428222656 0
      vertex 70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 -100 0
      vertex 68.03223419189453 -91.56776428222656 0
      vertex 68.55000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 -100 0
      vertex 68.55000305175781 -91.9650650024414 0
      vertex 69.1529541015625 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 69.1529541015625 -92.21481323242188 0
      vertex 69.80000305175781 -92.30000305175781 0
      vertex 70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 -100 0
      vertex 69.80000305175781 -92.30000305175781 0
      vertex 70.4470443725586 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 -100 0
      vertex 70.4470443725586 -92.21481323242188 0
      vertex 71.73648071289062 -99.84807586669922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.73648071289062 -99.84807586669922 0
      vertex 70.4470443725586 -92.21481323242188 0
      vertex 71.05000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 71.73648071289062 -99.84807586669922 0
      vertex 71.05000305175781 -91.9650650024414 0
      vertex 73.42020416259766 -99.39692687988281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 73.42020416259766 -99.39692687988281 0
      vertex 71.05000305175781 -91.9650650024414 0
      vertex 71.56776428222656 -91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 73.42020416259766 -99.39692687988281 0
      vertex 71.56776428222656 -91.56776428222656 0
      vertex 75 -98.6602554321289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 75 -98.6602554321289 0
      vertex 71.56776428222656 -91.56776428222656 0
      vertex 76.4278793334961 -97.66044616699219 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.4278793334961 -97.66044616699219 0
      vertex 71.56776428222656 -91.56776428222656 0
      vertex 71.9650650024414 -91.05000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 76.4278793334961 -97.66044616699219 0
      vertex 71.9650650024414 -91.05000305175781 0
      vertex 77.66044616699219 -96.4278793334961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 77.66044616699219 -96.4278793334961 0
      vertex 71.9650650024414 -91.05000305175781 0
      vertex 72.21481323242188 -90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 77.66044616699219 -96.4278793334961 0
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 78.6602554321289 -95 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 78.6602554321289 -95 0
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 79.39692687988281 -93.42020416259766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.39692687988281 -93.42020416259766 0
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 79.84807586669922 -91.73648071289062 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.84807586669922 -91.73648071289062 0
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 72.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.84807586669922 -91.73648071289062 0
      vertex 72.30000305175781 -89.80000305175781 0
      vertex 80 -90 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 -90 0
      vertex 72.30000305175781 -89.80000305175781 0
      vertex 72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 -90 0
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 80 -87 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 80 -87 0
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 79.87464141845703 -85.88739776611328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.87464141845703 -85.88739776611328 0
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 79.50484466552734 -84.83058166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 79.50484466552734 -84.83058166503906 0
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 78.9091567993164 -83.88255310058594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 78.9091567993164 -83.88255310058594 0
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 78.11744689941406 -83.0908432006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 0
      vertex -79.84807586669922 -91.73648071289062 0
      vertex -72.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.30000305175781 -89.80000305175781 0
      vertex -79.84807586669922 -91.73648071289062 0
      vertex -80 -90 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.30000305175781 -89.80000305175781 0
      vertex -80 -90 0
      vertex -72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -80 -90 0
      vertex -80 -87 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -80 -87 0
      vertex -79.87464141845703 -85.88739776611328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.9650650024414 -91.05000305175781 0
      vertex -77.66044616699219 -96.4278793334961 0
      vertex -72.21481323242188 -90.4470443725586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 0
      vertex -77.66044616699219 -96.4278793334961 0
      vertex -78.6602554321289 -95 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 0
      vertex -78.6602554321289 -95 0
      vertex -79.39692687988281 -93.42020416259766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -77.66044616699219 -96.4278793334961 0
      vertex -71.9650650024414 -91.05000305175781 0
      vertex -76.4278793334961 -97.66044616699219 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.4278793334961 -97.66044616699219 0
      vertex -71.9650650024414 -91.05000305175781 0
      vertex -71.56776428222656 -91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.4278793334961 -97.66044616699219 0
      vertex -71.56776428222656 -91.56776428222656 0
      vertex -75 -98.6602554321289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 -98.6602554321289 0
      vertex -71.56776428222656 -91.56776428222656 0
      vertex -73.42020416259766 -99.39692687988281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -73.42020416259766 -99.39692687988281 0
      vertex -71.56776428222656 -91.56776428222656 0
      vertex -71.05000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -73.42020416259766 -99.39692687988281 0
      vertex -71.05000305175781 -91.9650650024414 0
      vertex -71.73648071289062 -99.84807586669922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.73648071289062 -99.84807586669922 0
      vertex -71.05000305175781 -91.9650650024414 0
      vertex -70.4470443725586 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.73648071289062 -99.84807586669922 0
      vertex -70.4470443725586 -92.21481323242188 0
      vertex -70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -70.4470443725586 -92.21481323242188 0
      vertex -69.80000305175781 -92.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -69.80000305175781 -92.30000305175781 0
      vertex -69.1529541015625 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -69.1529541015625 -92.21481323242188 0
      vertex -68.55000305175781 -91.9650650024414 0
      vertex -70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -68.55000305175781 -91.9650650024414 0
      vertex -68.03223419189453 -91.56776428222656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -68.03223419189453 -91.56776428222656 0
      vertex -67.63493347167969 -91.05000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -67.63493347167969 -91.05000305175781 0
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -61.090843200683594 -80.11744689941406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex -61.090843200683594 -80.11744689941406 0
      vertex -60.495155334472656 -79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.090843200683594 -80.11744689941406 0
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -61.88254928588867 -80.9091567993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.88254928588867 -80.9091567993164 0
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -67.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -61.88254928588867 -80.9091567993164 0
      vertex -67.30000305175781 -89.80000305175781 0
      vertex -62.83058166503906 -81.50484466552734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -62.83058166503906 -81.50484466552734 0
      vertex -67.30000305175781 -89.80000305175781 0
      vertex -67.38518524169922 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -62.83058166503906 -81.50484466552734 0
      vertex -67.38518524169922 -89.1529541015625 0
      vertex -63.887393951416016 -81.87464141845703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -63.887393951416016 -81.87464141845703 0
      vertex -67.38518524169922 -89.1529541015625 0
      vertex -67.63493347167969 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -63.887393951416016 -81.87464141845703 0
      vertex -67.63493347167969 -88.55000305175781 0
      vertex -65 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 -82 0
      vertex -67.63493347167969 -88.55000305175781 0
      vertex -68.03223419189453 -88.03223419189453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 -82 0
      vertex -68.03223419189453 -88.03223419189453 0
      vertex -68.55000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -68.55000305175781 -87.63493347167969 0
      vertex -69.1529541015625 -87.38518524169922 0
      vertex -65 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 -82 0
      vertex -69.1529541015625 -87.38518524169922 0
      vertex -69.80000305175781 -87.30000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -65 -82 0
      vertex -69.80000305175781 -87.30000305175781 0
      vertex -75 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 -82 0
      vertex -69.80000305175781 -87.30000305175781 0
      vertex -70.4470443725586 -87.38518524169922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 -82 0
      vertex -70.4470443725586 -87.38518524169922 0
      vertex -71.05000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -71.05000305175781 -87.63493347167969 0
      vertex -71.56776428222656 -88.03223419189453 0
      vertex -75 -82 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 -82 0
      vertex -71.56776428222656 -88.03223419189453 0
      vertex -71.9650650024414 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -75 -82 0
      vertex -71.9650650024414 -88.55000305175781 0
      vertex -76.11260223388672 -82.12535858154297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.11260223388672 -82.12535858154297 0
      vertex -71.9650650024414 -88.55000305175781 0
      vertex -72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -76.11260223388672 -82.12535858154297 0
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -77.16941833496094 -82.49515533447266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -77.16941833496094 -82.49515533447266 0
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -78.11744689941406 -83.0908432006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -78.11744689941406 -83.0908432006836 0
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -78.9091567993164 -83.88255310058594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -78.9091567993164 -83.88255310058594 0
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -79.50484466552734 -84.83058166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -79.50484466552734 -84.83058166503906 0
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -79.87464141845703 -85.88739776611328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.12535858154297 -78.11260223388672 0
      vertex 60.12535858154297 -78.11260223388672 0
      vertex -60.495155334472656 -79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.495155334472656 -79.16941833496094 0
      vertex 60.12535858154297 -78.11260223388672 0
      vertex 60.495155334472656 -79.16941833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -60.495155334472656 -79.16941833496094 0
      vertex 60.495155334472656 -79.16941833496094 0
      vertex -70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -70 -100 0
      vertex 60.495155334472656 -79.16941833496094 0
      vertex 70 -100 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 70 -100 0
      vertex 60.495155334472656 -79.16941833496094 0
      vertex 61.090843200683594 -80.11744689941406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 60.12535858154297 -78.11260223388672 0
      vertex -60.12535858154297 -78.11260223388672 0
      vertex 60 -77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 60 -77 0
      vertex -60.12535858154297 -78.11260223388672 0
      vertex -60 -77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -78.11744689941406 83.0908432006836 0
      vertex -78.9091567993164 83.88255310058594 0
      vertex -72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -78.9091567993164 83.88255310058594 0
      vertex -79.50484466552734 84.83058166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -79.50484466552734 84.83058166503906 0
      vertex -79.87464141845703 85.88739776611328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -79.87464141845703 85.88739776611328 0
      vertex -80 87 0
      vertex -72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -72.21481323242188 89.1529541015625 0
      vertex -80 87 0
      vertex -80 90 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -79.39692687988281 -93.42020416259766 0
      vertex -79.84807586669922 -91.73648071289062 0
      vertex -72.21481323242188 -90.4470443725586 0
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -65 82 3
      vertex -65 82 0
      vertex -63.887393951416016 81.87464141845703 3
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -63.887393951416016 81.87464141845703 3
      vertex -65 82 0
      vertex -63.887393951416016 81.87464141845703 0
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -63.887393951416016 81.87464141845703 3
      vertex -63.887393951416016 81.87464141845703 0
      vertex -62.83058166503906 81.50484466552734 3
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -62.83058166503906 81.50484466552734 3
      vertex -63.887393951416016 81.87464141845703 0
      vertex -62.83058166503906 81.50484466552734 0
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -62.83058166503906 81.50484466552734 3
      vertex -62.83058166503906 81.50484466552734 0
      vertex -61.88254928588867 80.9091567993164 3
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -61.88254928588867 80.9091567993164 3
      vertex -62.83058166503906 81.50484466552734 0
      vertex -61.88254928588867 80.9091567993164 0
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -61.88254928588867 80.9091567993164 3
      vertex -61.88254928588867 80.9091567993164 0
      vertex -61.090843200683594 80.11744689941406 3
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -61.090843200683594 80.11744689941406 3
      vertex -61.88254928588867 80.9091567993164 0
      vertex -61.090843200683594 80.11744689941406 0
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -61.090843200683594 80.11744689941406 3
      vertex -61.090843200683594 80.11744689941406 0
      vertex -60.495155334472656 79.16941833496094 3
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -60.495155334472656 79.16941833496094 3
      vertex -61.090843200683594 80.11744689941406 0
      vertex -60.495155334472656 79.16941833496094 0
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -60.495155334472656 79.16941833496094 3
      vertex -60.495155334472656 79.16941833496094 0
      vertex -60.12535858154297 78.11260223388672 3
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -60.12535858154297 78.11260223388672 3
      vertex -60.495155334472656 79.16941833496094 0
      vertex -60.12535858154297 78.11260223388672 0
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -60.12535858154297 78.11260223388672 3
      vertex -60.12535858154297 78.11260223388672 0
      vertex -60 77 3
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -60 77 3
      vertex -60.12535858154297 78.11260223388672 0
      vertex -60 77 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -60 -77 3
      vertex -60 77 3
      vertex -60 -77 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -60 -77 0
      vertex -60 77 3
      vertex -60 77 0
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -75 82 0
      vertex -75 82 3
      vertex -76.11260223388672 82.12535858154297 0
    endloop
  endfacet
  facet normal -0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex -76.11260223388672 82.12535858154297 0
      vertex -75 82 3
      vertex -76.11260223388672 82.12535858154297 3
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -76.11260223388672 82.12535858154297 0
      vertex -76.11260223388672 82.12535858154297 3
      vertex -77.16941833496094 82.49515533447266 0
    endloop
  endfacet
  facet normal -0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex -77.16941833496094 82.49515533447266 0
      vertex -76.11260223388672 82.12535858154297 3
      vertex -77.16941833496094 82.49515533447266 3
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -77.16941833496094 82.49515533447266 0
      vertex -77.16941833496094 82.49515533447266 3
      vertex -78.11744689941406 83.0908432006836 0
    endloop
  endfacet
  facet normal -0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex -78.11744689941406 83.0908432006836 0
      vertex -77.16941833496094 82.49515533447266 3
      vertex -78.11744689941406 83.0908432006836 3
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -78.11744689941406 83.0908432006836 0
      vertex -78.11744689941406 83.0908432006836 3
      vertex -78.9091567993164 83.88255310058594 0
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -78.9091567993164 83.88255310058594 0
      vertex -78.11744689941406 83.0908432006836 3
      vertex -78.9091567993164 83.88255310058594 3
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -78.9091567993164 83.88255310058594 0
      vertex -78.9091567993164 83.88255310058594 3
      vertex -79.50484466552734 84.83058166503906 0
    endloop
  endfacet
  facet normal -0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex -79.50484466552734 84.83058166503906 0
      vertex -78.9091567993164 83.88255310058594 3
      vertex -79.50484466552734 84.83058166503906 3
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -79.50484466552734 84.83058166503906 0
      vertex -79.50484466552734 84.83058166503906 3
      vertex -79.87464141845703 85.88739776611328 0
    endloop
  endfacet
  facet normal -0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex -79.87464141845703 85.88739776611328 0
      vertex -79.50484466552734 84.83058166503906 3
      vertex -79.87464141845703 85.88739776611328 3
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -79.87464141845703 85.88739776611328 0
      vertex -79.87464141845703 85.88739776611328 3
      vertex -80 87 0
    endloop
  endfacet
  facet normal -0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex -80 87 0
      vertex -79.87464141845703 85.88739776611328 3
      vertex -80 87 3
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -65 82 3
      vertex -75 82 3
      vertex -65 82 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -65 82 0
      vertex -75 82 3
      vertex -75 82 0
    endloop
  endfacet
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 75 -82 0
      vertex 75 -82 3
      vertex 76.11260223388672 -82.12535858154297 0
    endloop
  endfacet
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 76.11260223388672 -82.12535858154297 0
      vertex 75 -82 3
      vertex 76.11260223388672 -82.12535858154297 3
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 76.11260223388672 -82.12535858154297 0
      vertex 76.11260223388672 -82.12535858154297 3
      vertex 77.16941833496094 -82.49515533447266 0
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 77.16941833496094 -82.49515533447266 0
      vertex 76.11260223388672 -82.12535858154297 3
      vertex 77.16941833496094 -82.49515533447266 3
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 77.16941833496094 -82.49515533447266 0
      vertex 77.16941833496094 -82.49515533447266 3
      vertex 78.11744689941406 -83.0908432006836 0
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 78.11744689941406 -83.0908432006836 0
      vertex 77.16941833496094 -82.49515533447266 3
      vertex 78.11744689941406 -83.0908432006836 3
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 78.11744689941406 -83.0908432006836 0
      vertex 78.11744689941406 -83.0908432006836 3
      vertex 78.9091567993164 -83.88255310058594 0
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 78.9091567993164 -83.88255310058594 0
      vertex 78.11744689941406 -83.0908432006836 3
      vertex 78.9091567993164 -83.88255310058594 3
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex 78.9091567993164 -83.88255310058594 0
      vertex 78.9091567993164 -83.88255310058594 3
      vertex 79.50484466552734 -84.83058166503906 0
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex 79.50484466552734 -84.83058166503906 0
      vertex 78.9091567993164 -83.88255310058594 3
      vertex 79.50484466552734 -84.83058166503906 3
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 79.50484466552734 -84.83058166503906 0
      vertex 79.50484466552734 -84.83058166503906 3
      vertex 79.87464141845703 -85.88739776611328 0
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 79.87464141845703 -85.88739776611328 0
      vertex 79.50484466552734 -84.83058166503906 3
      vertex 79.87464141845703 -85.88739776611328 3
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 79.87464141845703 -85.88739776611328 0
      vertex 79.87464141845703 -85.88739776611328 3
      vertex 80 -87 0
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 80 -87 0
      vertex 79.87464141845703 -85.88739776611328 3
      vertex 80 -87 3
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 75 -82 0
      vertex 65 -82 0
      vertex 75 -82 3
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 75 -82 3
      vertex 65 -82 0
      vertex 65 -82 3
    endloop
  endfacet
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 65 -82 3
      vertex 65 -82 0
      vertex 63.887393951416016 -81.87464141845703 3
    endloop
  endfacet
  facet normal 0.11196447908878326 0.9937121868133545 0
    outer loop
      vertex 63.887393951416016 -81.87464141845703 3
      vertex 65 -82 0
      vertex 63.887393951416016 -81.87464141845703 0
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 63.887393951416016 -81.87464141845703 3
      vertex 63.887393951416016 -81.87464141845703 0
      vertex 62.83058166503906 -81.50484466552734 3
    endloop
  endfacet
  facet normal 0.33027905225753784 0.9438833594322205 0
    outer loop
      vertex 62.83058166503906 -81.50484466552734 3
      vertex 63.887393951416016 -81.87464141845703 0
      vertex 62.83058166503906 -81.50484466552734 0
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 62.83058166503906 -81.50484466552734 3
      vertex 62.83058166503906 -81.50484466552734 0
      vertex 61.88254928588867 -80.9091567993164 3
    endloop
  endfacet
  facet normal 0.5320320725440979 0.8467242121696472 0
    outer loop
      vertex 61.88254928588867 -80.9091567993164 3
      vertex 62.83058166503906 -81.50484466552734 0
      vertex 61.88254928588867 -80.9091567993164 0
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 61.88254928588867 -80.9091567993164 3
      vertex 61.88254928588867 -80.9091567993164 0
      vertex 61.090843200683594 -80.11744689941406 3
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 3.3495305917866916e-15
    outer loop
      vertex 61.090843200683594 -80.11744689941406 3
      vertex 61.88254928588867 -80.9091567993164 0
      vertex 61.090843200683594 -80.11744689941406 0
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 4.010891587662244e-15
    outer loop
      vertex 61.090843200683594 -80.11744689941406 3
      vertex 61.090843200683594 -80.11744689941406 0
      vertex 60.495155334472656 -79.16941833496094 3
    endloop
  endfacet
  facet normal 0.8467242121696472 0.5320320725440979 0
    outer loop
      vertex 60.495155334472656 -79.16941833496094 3
      vertex 61.090843200683594 -80.11744689941406 0
      vertex 60.495155334472656 -79.16941833496094 0
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 60.495155334472656 -79.16941833496094 3
      vertex 60.495155334472656 -79.16941833496094 0
      vertex 60.12535858154297 -78.11260223388672 3
    endloop
  endfacet
  facet normal 0.9438833594322205 0.33027905225753784 0
    outer loop
      vertex 60.12535858154297 -78.11260223388672 3
      vertex 60.495155334472656 -79.16941833496094 0
      vertex 60.12535858154297 -78.11260223388672 0
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 60.12535858154297 -78.11260223388672 3
      vertex 60.12535858154297 -78.11260223388672 0
      vertex 60 -77 3
    endloop
  endfacet
  facet normal 0.9937121868133545 0.11196447908878326 0
    outer loop
      vertex 60 -77 3
      vertex 60.12535858154297 -78.11260223388672 0
      vertex 60 -77 0
    endloop
  endfacet
  facet normal 1 -4.613913930449486e-16 0
    outer loop
      vertex 60 -77 0
      vertex 60 77 0
      vertex 60 -77 3
    endloop
  endfacet
  facet normal 1 -4.613913930449486e-16 0
    outer loop
      vertex 60 -77 3
      vertex 60 77 0
      vertex 60 77 3
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 75 82 3
      vertex 75 82 0
      vertex 76.11260223388672 82.12535858154297 3
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 76.11260223388672 82.12535858154297 3
      vertex 75 82 0
      vertex 76.11260223388672 82.12535858154297 0
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 76.11260223388672 82.12535858154297 3
      vertex 76.11260223388672 82.12535858154297 0
      vertex 77.16941833496094 82.49515533447266 3
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 77.16941833496094 82.49515533447266 3
      vertex 76.11260223388672 82.12535858154297 0
      vertex 77.16941833496094 82.49515533447266 0
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 77.16941833496094 82.49515533447266 3
      vertex 77.16941833496094 82.49515533447266 0
      vertex 78.11744689941406 83.0908432006836 3
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 78.11744689941406 83.0908432006836 3
      vertex 77.16941833496094 82.49515533447266 0
      vertex 78.11744689941406 83.0908432006836 0
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 78.11744689941406 83.0908432006836 3
      vertex 78.11744689941406 83.0908432006836 0
      vertex 78.9091567993164 83.88255310058594 3
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 78.9091567993164 83.88255310058594 3
      vertex 78.11744689941406 83.0908432006836 0
      vertex 78.9091567993164 83.88255310058594 0
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 78.9091567993164 83.88255310058594 3
      vertex 78.9091567993164 83.88255310058594 0
      vertex 79.50484466552734 84.83058166503906 3
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 79.50484466552734 84.83058166503906 3
      vertex 78.9091567993164 83.88255310058594 0
      vertex 79.50484466552734 84.83058166503906 0
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex 79.50484466552734 84.83058166503906 3
      vertex 79.50484466552734 84.83058166503906 0
      vertex 79.87464141845703 85.88739776611328 3
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex 79.87464141845703 85.88739776611328 3
      vertex 79.50484466552734 84.83058166503906 0
      vertex 79.87464141845703 85.88739776611328 0
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex 79.87464141845703 85.88739776611328 3
      vertex 79.87464141845703 85.88739776611328 0
      vertex 80 87 3
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex 80 87 3
      vertex 79.87464141845703 85.88739776611328 0
      vertex 80 87 0
    endloop
  endfacet
  facet normal -2.842170985392048e-15 -1 0
    outer loop
      vertex 75 82 3
      vertex 65 82 3
      vertex 75 82 0
    endloop
  endfacet
  facet normal -2.842170985392048e-15 -1 0
    outer loop
      vertex 75 82 0
      vertex 65 82 3
      vertex 65 82 0
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex 60 77 3
      vertex 60 77 0
      vertex 60.12535858154297 78.11260223388672 3
    endloop
  endfacet
  facet normal 0.9937121868133545 -0.11196447908878326 0
    outer loop
      vertex 60.12535858154297 78.11260223388672 3
      vertex 60 77 0
      vertex 60.12535858154297 78.11260223388672 0
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex 60.12535858154297 78.11260223388672 3
      vertex 60.12535858154297 78.11260223388672 0
      vertex 60.495155334472656 79.16941833496094 3
    endloop
  endfacet
  facet normal 0.9438833594322205 -0.33027905225753784 0
    outer loop
      vertex 60.495155334472656 79.16941833496094 3
      vertex 60.12535858154297 78.11260223388672 0
      vertex 60.495155334472656 79.16941833496094 0
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 60.495155334472656 79.16941833496094 3
      vertex 60.495155334472656 79.16941833496094 0
      vertex 61.090843200683594 80.11744689941406 3
    endloop
  endfacet
  facet normal 0.8467242121696472 -0.5320320725440979 0
    outer loop
      vertex 61.090843200683594 80.11744689941406 3
      vertex 60.495155334472656 79.16941833496094 0
      vertex 61.090843200683594 80.11744689941406 0
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 61.090843200683594 80.11744689941406 3
      vertex 61.090843200683594 80.11744689941406 0
      vertex 61.88254928588867 80.9091567993164 3
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 61.88254928588867 80.9091567993164 3
      vertex 61.090843200683594 80.11744689941406 0
      vertex 61.88254928588867 80.9091567993164 0
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 61.88254928588867 80.9091567993164 3
      vertex 61.88254928588867 80.9091567993164 0
      vertex 62.83058166503906 81.50484466552734 3
    endloop
  endfacet
  facet normal 0.5320320725440979 -0.8467242121696472 0
    outer loop
      vertex 62.83058166503906 81.50484466552734 3
      vertex 61.88254928588867 80.9091567993164 0
      vertex 62.83058166503906 81.50484466552734 0
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 62.83058166503906 81.50484466552734 3
      vertex 62.83058166503906 81.50484466552734 0
      vertex 63.887393951416016 81.87464141845703 3
    endloop
  endfacet
  facet normal 0.33027905225753784 -0.9438833594322205 0
    outer loop
      vertex 63.887393951416016 81.87464141845703 3
      vertex 62.83058166503906 81.50484466552734 0
      vertex 63.887393951416016 81.87464141845703 0
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 63.887393951416016 81.87464141845703 3
      vertex 63.887393951416016 81.87464141845703 0
      vertex 65 82 3
    endloop
  endfacet
  facet normal 0.11196447908878326 -0.9937121868133545 0
    outer loop
      vertex 65 82 3
      vertex 63.887393951416016 81.87464141845703 0
      vertex 65 82 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 80 -87 3
      vertex 80 -90 3
      vertex 80 -87 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 80 -87 0
      vertex 80 -90 3
      vertex 80 -90 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -80 87 3
      vertex -80 90 3
      vertex -80 87 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex -80 87 0
      vertex -80 90 3
      vertex -80 90 0
    endloop
  endfacet
  facet normal 0.08715574443340302 0.9961947202682495 0
    outer loop
      vertex 70 100 0
      vertex 70 100 3
      vertex 71.73648071289062 99.84807586669922 0
    endloop
  endfacet
  facet normal 0.08715574443340302 0.9961947202682495 0
    outer loop
      vertex 71.73648071289062 99.84807586669922 0
      vertex 70 100 3
      vertex 71.73648071289062 99.84807586669922 3
    endloop
  endfacet
  facet normal 0.258819043636322 0.9659258127212524 0
    outer loop
      vertex 71.73648071289062 99.84807586669922 0
      vertex 71.73648071289062 99.84807586669922 3
      vertex 73.42020416259766 99.39692687988281 0
    endloop
  endfacet
  facet normal 0.258819043636322 0.9659258127212524 0
    outer loop
      vertex 73.42020416259766 99.39692687988281 0
      vertex 71.73648071289062 99.84807586669922 3
      vertex 73.42020416259766 99.39692687988281 3
    endloop
  endfacet
  facet normal 0.4226182699203491 0.9063078165054321 0
    outer loop
      vertex 73.42020416259766 99.39692687988281 0
      vertex 73.42020416259766 99.39692687988281 3
      vertex 75 98.6602554321289 0
    endloop
  endfacet
  facet normal 0.4226182699203491 0.9063078165054321 0
    outer loop
      vertex 75 98.6602554321289 0
      vertex 73.42020416259766 99.39692687988281 3
      vertex 75 98.6602554321289 3
    endloop
  endfacet
  facet normal 0.5735764503479004 0.8191520571708679 0
    outer loop
      vertex 75 98.6602554321289 0
      vertex 75 98.6602554321289 3
      vertex 76.4278793334961 97.66044616699219 0
    endloop
  endfacet
  facet normal 0.5735764503479004 0.8191520571708679 0
    outer loop
      vertex 76.4278793334961 97.66044616699219 0
      vertex 75 98.6602554321289 3
      vertex 76.4278793334961 97.66044616699219 3
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 76.4278793334961 97.66044616699219 0
      vertex 76.4278793334961 97.66044616699219 3
      vertex 77.66044616699219 96.4278793334961 0
    endloop
  endfacet
  facet normal 0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex 77.66044616699219 96.4278793334961 0
      vertex 76.4278793334961 97.66044616699219 3
      vertex 77.66044616699219 96.4278793334961 3
    endloop
  endfacet
  facet normal 0.8191520571708679 0.5735764503479004 0
    outer loop
      vertex 77.66044616699219 96.4278793334961 0
      vertex 77.66044616699219 96.4278793334961 3
      vertex 78.6602554321289 95 0
    endloop
  endfacet
  facet normal 0.8191520571708679 0.5735764503479004 0
    outer loop
      vertex 78.6602554321289 95 0
      vertex 77.66044616699219 96.4278793334961 3
      vertex 78.6602554321289 95 3
    endloop
  endfacet
  facet normal 0.9063078165054321 0.4226182699203491 0
    outer loop
      vertex 78.6602554321289 95 0
      vertex 78.6602554321289 95 3
      vertex 79.39692687988281 93.42020416259766 0
    endloop
  endfacet
  facet normal 0.9063078165054321 0.4226182699203491 0
    outer loop
      vertex 79.39692687988281 93.42020416259766 0
      vertex 78.6602554321289 95 3
      vertex 79.39692687988281 93.42020416259766 3
    endloop
  endfacet
  facet normal 0.9659258127212524 0.258819043636322 0
    outer loop
      vertex 79.39692687988281 93.42020416259766 0
      vertex 79.39692687988281 93.42020416259766 3
      vertex 79.84807586669922 91.73648071289062 0
    endloop
  endfacet
  facet normal 0.9659258127212524 0.258819043636322 0
    outer loop
      vertex 79.84807586669922 91.73648071289062 0
      vertex 79.39692687988281 93.42020416259766 3
      vertex 79.84807586669922 91.73648071289062 3
    endloop
  endfacet
  facet normal 0.9961947202682495 0.08715574443340302 0
    outer loop
      vertex 79.84807586669922 91.73648071289062 0
      vertex 79.84807586669922 91.73648071289062 3
      vertex 80 90 0
    endloop
  endfacet
  facet normal 0.9961947202682495 0.08715574443340302 0
    outer loop
      vertex 80 90 0
      vertex 79.84807586669922 91.73648071289062 3
      vertex 80 90 3
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 80 87 0
      vertex 80 90 0
      vertex 80 87 3
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 80 87 3
      vertex 80 90 0
      vertex 80 90 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -76.11260223388672 -82.12535858154297 3
      vertex -71.9650650024414 -88.55000305175781 3
      vertex -75 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -75 -82 3
      vertex -71.9650650024414 -88.55000305175781 3
      vertex -71.56776428222656 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -75 -82 3
      vertex -71.56776428222656 -88.03223419189453 3
      vertex -71.05000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 -88.55000305175781 3
      vertex -76.11260223388672 -82.12535858154297 3
      vertex -72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -76.11260223388672 -82.12535858154297 3
      vertex -77.16941833496094 -82.49515533447266 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -77.16941833496094 -82.49515533447266 3
      vertex -78.11744689941406 -83.0908432006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -78.11744689941406 -83.0908432006836 3
      vertex -78.9091567993164 -83.88255310058594 3
      vertex -72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -78.9091567993164 -83.88255310058594 3
      vertex -79.50484466552734 -84.83058166503906 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -79.50484466552734 -84.83058166503906 3
      vertex -79.87464141845703 -85.88739776611328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -79.87464141845703 -85.88739776611328 3
      vertex -80 -87 3
      vertex -72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -80 -87 3
      vertex -80 -90 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -80 -90 3
      vertex -72.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.30000305175781 -89.80000305175781 3
      vertex -80 -90 3
      vertex -79.84807586669922 -91.73648071289062 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.30000305175781 -89.80000305175781 3
      vertex -79.84807586669922 -91.73648071289062 3
      vertex -72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 3
      vertex -79.84807586669922 -91.73648071289062 3
      vertex -79.39692687988281 -93.42020416259766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 3
      vertex -79.39692687988281 -93.42020416259766 3
      vertex -78.6602554321289 -95 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -78.6602554321289 -95 3
      vertex -77.66044616699219 -96.4278793334961 3
      vertex -72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 -90.4470443725586 3
      vertex -77.66044616699219 -96.4278793334961 3
      vertex -71.9650650024414 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 -91.05000305175781 3
      vertex -77.66044616699219 -96.4278793334961 3
      vertex -76.4278793334961 -97.66044616699219 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 -91.05000305175781 3
      vertex -76.4278793334961 -97.66044616699219 3
      vertex -71.56776428222656 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 -91.56776428222656 3
      vertex -76.4278793334961 -97.66044616699219 3
      vertex -75 -98.6602554321289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 -91.56776428222656 3
      vertex -75 -98.6602554321289 3
      vertex -73.42020416259766 -99.39692687988281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 -91.56776428222656 3
      vertex -73.42020416259766 -99.39692687988281 3
      vertex -71.05000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.05000305175781 -91.9650650024414 3
      vertex -73.42020416259766 -99.39692687988281 3
      vertex -71.73648071289062 -99.84807586669922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.05000305175781 -91.9650650024414 3
      vertex -71.73648071289062 -99.84807586669922 3
      vertex -70.4470443725586 -92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70.4470443725586 -92.21481323242188 3
      vertex -71.73648071289062 -99.84807586669922 3
      vertex -70 -100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70.4470443725586 -92.21481323242188 3
      vertex -70 -100 3
      vertex -69.80000305175781 -92.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.80000305175781 -92.30000305175781 3
      vertex -70 -100 3
      vertex -69.1529541015625 -92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.1529541015625 -92.21481323242188 3
      vertex -70 -100 3
      vertex -68.55000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.55000305175781 -91.9650650024414 3
      vertex -70 -100 3
      vertex -68.03223419189453 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.03223419189453 -91.56776428222656 3
      vertex -70 -100 3
      vertex -67.63493347167969 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 -91.05000305175781 3
      vertex -70 -100 3
      vertex -67.38518524169922 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 -90.4470443725586 3
      vertex -70 -100 3
      vertex -61.090843200683594 -80.11744689941406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 -90.4470443725586 3
      vertex -61.090843200683594 -80.11744689941406 3
      vertex -61.88254928588867 -80.9091567993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -61.090843200683594 -80.11744689941406 3
      vertex -70 -100 3
      vertex -60.495155334472656 -79.16941833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.495155334472656 -79.16941833496094 3
      vertex -70 -100 3
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.495155334472656 -79.16941833496094 3
      vertex 70 -100 3
      vertex 60.495155334472656 -79.16941833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 60.495155334472656 -79.16941833496094 3
      vertex 70 -100 3
      vertex 61.090843200683594 -80.11744689941406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 61.090843200683594 -80.11744689941406 3
      vertex 70 -100 3
      vertex 67.38518524169922 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 61.090843200683594 -80.11744689941406 3
      vertex 67.38518524169922 -90.4470443725586 3
      vertex 61.88254928588867 -80.9091567993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 61.88254928588867 -80.9091567993164 3
      vertex 67.38518524169922 -90.4470443725586 3
      vertex 67.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 61.88254928588867 -80.9091567993164 3
      vertex 67.30000305175781 -89.80000305175781 3
      vertex 62.83058166503906 -81.50484466552734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 62.83058166503906 -81.50484466552734 3
      vertex 67.30000305175781 -89.80000305175781 3
      vertex 67.38518524169922 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 62.83058166503906 -81.50484466552734 3
      vertex 67.38518524169922 -89.1529541015625 3
      vertex 63.887393951416016 -81.87464141845703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 63.887393951416016 -81.87464141845703 3
      vertex 67.38518524169922 -89.1529541015625 3
      vertex 67.63493347167969 -88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 63.887393951416016 -81.87464141845703 3
      vertex 67.63493347167969 -88.55000305175781 3
      vertex 65 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 65 -82 3
      vertex 67.63493347167969 -88.55000305175781 3
      vertex 68.03223419189453 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 65 -82 3
      vertex 68.03223419189453 -88.03223419189453 3
      vertex 68.55000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.73648071289062 -99.84807586669922 3
      vertex 70.4470443725586 -92.21481323242188 3
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 -100 3
      vertex 70.4470443725586 -92.21481323242188 3
      vertex 69.80000305175781 -92.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 -100 3
      vertex 69.80000305175781 -92.30000305175781 3
      vertex 69.1529541015625 -92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70.4470443725586 -92.21481323242188 3
      vertex 71.73648071289062 -99.84807586669922 3
      vertex 71.05000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 -91.9650650024414 3
      vertex 71.73648071289062 -99.84807586669922 3
      vertex 73.42020416259766 -99.39692687988281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 -91.9650650024414 3
      vertex 73.42020416259766 -99.39692687988281 3
      vertex 71.56776428222656 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 -91.56776428222656 3
      vertex 73.42020416259766 -99.39692687988281 3
      vertex 75 -98.6602554321289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 -91.56776428222656 3
      vertex 75 -98.6602554321289 3
      vertex 76.4278793334961 -97.66044616699219 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 -91.56776428222656 3
      vertex 76.4278793334961 -97.66044616699219 3
      vertex 71.9650650024414 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 -91.05000305175781 3
      vertex 76.4278793334961 -97.66044616699219 3
      vertex 77.66044616699219 -96.4278793334961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 -91.05000305175781 3
      vertex 77.66044616699219 -96.4278793334961 3
      vertex 72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -90.4470443725586 3
      vertex 77.66044616699219 -96.4278793334961 3
      vertex 78.6602554321289 -95 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -90.4470443725586 3
      vertex 78.6602554321289 -95 3
      vertex 79.39692687988281 -93.42020416259766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 79.39692687988281 -93.42020416259766 3
      vertex 79.84807586669922 -91.73648071289062 3
      vertex 72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -90.4470443725586 3
      vertex 79.84807586669922 -91.73648071289062 3
      vertex 72.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.30000305175781 -89.80000305175781 3
      vertex 79.84807586669922 -91.73648071289062 3
      vertex 80 -90 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.30000305175781 -89.80000305175781 3
      vertex 80 -90 3
      vertex 72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 80 -90 3
      vertex 80 -87 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 80 -87 3
      vertex 79.87464141845703 -85.88739776611328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 79.87464141845703 -85.88739776611328 3
      vertex 79.50484466552734 -84.83058166503906 3
      vertex 72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 79.50484466552734 -84.83058166503906 3
      vertex 78.9091567993164 -83.88255310058594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 78.9091567993164 -83.88255310058594 3
      vertex 78.11744689941406 -83.0908432006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 78.11744689941406 -83.0908432006836 3
      vertex 77.16941833496094 -82.49515533447266 3
      vertex 72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 77.16941833496094 -82.49515533447266 3
      vertex 76.11260223388672 -82.12535858154297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 76.11260223388672 -82.12535858154297 3
      vertex 71.9650650024414 -88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 -88.55000305175781 3
      vertex 76.11260223388672 -82.12535858154297 3
      vertex 75 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 -88.55000305175781 3
      vertex 75 -82 3
      vertex 71.56776428222656 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 -88.03223419189453 3
      vertex 75 -82 3
      vertex 71.05000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 -87.63493347167969 3
      vertex 75 -82 3
      vertex 70.4470443725586 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70.4470443725586 -87.38518524169922 3
      vertex 75 -82 3
      vertex 69.80000305175781 -87.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.80000305175781 -87.30000305175781 3
      vertex 75 -82 3
      vertex 65 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.80000305175781 -87.30000305175781 3
      vertex 65 -82 3
      vertex 69.1529541015625 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.1529541015625 -87.38518524169922 3
      vertex 65 -82 3
      vertex 68.55000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.495155334472656 -79.16941833496094 3
      vertex 60.495155334472656 -79.16941833496094 3
      vertex -60.12535858154297 -78.11260223388672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.12535858154297 -78.11260223388672 3
      vertex 60.495155334472656 -79.16941833496094 3
      vertex 60.12535858154297 -78.11260223388672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.12535858154297 -78.11260223388672 3
      vertex 60.12535858154297 -78.11260223388672 3
      vertex -60 -77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60 -77 3
      vertex 60.12535858154297 -78.11260223388672 3
      vertex 60 -77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60 -77 3
      vertex 60 -77 3
      vertex -25 -15 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -25 -15 3
      vertex 60 -77 3
      vertex 25 -15 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25 -15 3
      vertex 60 -77 3
      vertex 26.11260414123535 -14.874639511108398 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.11260414123535 -14.874639511108398 3
      vertex 60 -77 3
      vertex 27.169418334960938 -14.504844665527344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.169418334960938 -14.504844665527344 3
      vertex 60 -77 3
      vertex 28.117448806762695 -13.909157752990723 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.117448806762695 -13.909157752990723 3
      vertex 60 -77 3
      vertex 28.909156799316406 -13.117448806762695 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.909156799316406 -13.117448806762695 3
      vertex 60 -77 3
      vertex 29.504844665527344 -12.169418334960938 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 29.504844665527344 -12.169418334960938 3
      vertex 60 -77 3
      vertex 29.8746395111084 -11.112605094909668 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 29.8746395111084 -11.112605094909668 3
      vertex 60 -77 3
      vertex 30 -10 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 30 -10 3
      vertex 60 -77 3
      vertex 30 10 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 30 10 3
      vertex 60 -77 3
      vertex 60 77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 30 10 3
      vertex 60 77 3
      vertex 29.8746395111084 11.112605094909668 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 29.8746395111084 11.112605094909668 3
      vertex 60 77 3
      vertex 29.504844665527344 12.169418334960938 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 29.504844665527344 12.169418334960938 3
      vertex 60 77 3
      vertex 28.909156799316406 13.117448806762695 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.909156799316406 13.117448806762695 3
      vertex 60 77 3
      vertex 28.117448806762695 13.909157752990723 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.117448806762695 13.909157752990723 3
      vertex 60 77 3
      vertex 27.169418334960938 14.504844665527344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.169418334960938 14.504844665527344 3
      vertex 60 77 3
      vertex 26.11260414123535 14.874639511108398 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.11260414123535 14.874639511108398 3
      vertex 60 77 3
      vertex 25 15 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25 15 3
      vertex 60 77 3
      vertex -60 77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25 15 3
      vertex -60 77 3
      vertex -25 15 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -25 15 3
      vertex -60 77 3
      vertex -26.11260414123535 14.874639511108398 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -26.11260414123535 14.874639511108398 3
      vertex -60 77 3
      vertex -27.169418334960938 14.504844665527344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -27.169418334960938 14.504844665527344 3
      vertex -60 77 3
      vertex -28.117448806762695 13.909157752990723 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -28.117448806762695 13.909157752990723 3
      vertex -60 77 3
      vertex -28.909156799316406 13.117448806762695 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -28.909156799316406 13.117448806762695 3
      vertex -60 77 3
      vertex -29.504844665527344 12.169418334960938 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -29.504844665527344 12.169418334960938 3
      vertex -60 77 3
      vertex -29.8746395111084 11.112605094909668 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -29.8746395111084 11.112605094909668 3
      vertex -60 77 3
      vertex -30 10 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -30 10 3
      vertex -60 77 3
      vertex -60 -77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -30 10 3
      vertex -60 -77 3
      vertex -30 -10 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -30 -10 3
      vertex -60 -77 3
      vertex -29.8746395111084 -11.112605094909668 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -29.8746395111084 -11.112605094909668 3
      vertex -60 -77 3
      vertex -29.504844665527344 -12.169418334960938 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -29.504844665527344 -12.169418334960938 3
      vertex -60 -77 3
      vertex -28.909156799316406 -13.117448806762695 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -28.909156799316406 -13.117448806762695 3
      vertex -60 -77 3
      vertex -28.117448806762695 -13.909157752990723 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -28.117448806762695 -13.909157752990723 3
      vertex -60 -77 3
      vertex -27.169418334960938 -14.504844665527344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -27.169418334960938 -14.504844665527344 3
      vertex -60 -77 3
      vertex -26.11260414123535 -14.874639511108398 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -26.11260414123535 -14.874639511108398 3
      vertex -60 -77 3
      vertex -25 -15 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60 77 3
      vertex 60 77 3
      vertex -60.12535858154297 78.11260223388672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.12535858154297 78.11260223388672 3
      vertex 60 77 3
      vertex 60.12535858154297 78.11260223388672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.12535858154297 78.11260223388672 3
      vertex 60.12535858154297 78.11260223388672 3
      vertex -60.495155334472656 79.16941833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.495155334472656 79.16941833496094 3
      vertex 60.12535858154297 78.11260223388672 3
      vertex 60.495155334472656 79.16941833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -60.495155334472656 79.16941833496094 3
      vertex 60.495155334472656 79.16941833496094 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex 60.495155334472656 79.16941833496094 3
      vertex 70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 100 3
      vertex 60.495155334472656 79.16941833496094 3
      vertex 61.090843200683594 80.11744689941406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 100 3
      vertex 61.090843200683594 80.11744689941406 3
      vertex 67.38518524169922 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.38518524169922 90.4470443725586 3
      vertex 61.090843200683594 80.11744689941406 3
      vertex 61.88254928588867 80.9091567993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.38518524169922 90.4470443725586 3
      vertex 61.88254928588867 80.9091567993164 3
      vertex 67.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.30000305175781 89.80000305175781 3
      vertex 61.88254928588867 80.9091567993164 3
      vertex 62.83058166503906 81.50484466552734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.30000305175781 89.80000305175781 3
      vertex 62.83058166503906 81.50484466552734 3
      vertex 67.38518524169922 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.38518524169922 89.1529541015625 3
      vertex 62.83058166503906 81.50484466552734 3
      vertex 63.887393951416016 81.87464141845703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.38518524169922 89.1529541015625 3
      vertex 63.887393951416016 81.87464141845703 3
      vertex 67.63493347167969 88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.63493347167969 88.55000305175781 3
      vertex 63.887393951416016 81.87464141845703 3
      vertex 65 82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.63493347167969 88.55000305175781 3
      vertex 65 82 3
      vertex 68.03223419189453 88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 68.03223419189453 88.03223419189453 3
      vertex 65 82 3
      vertex 68.55000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 68.55000305175781 87.63493347167969 3
      vertex 65 82 3
      vertex 69.1529541015625 87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.1529541015625 87.38518524169922 3
      vertex 65 82 3
      vertex 69.80000305175781 87.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.80000305175781 87.30000305175781 3
      vertex 65 82 3
      vertex 75 82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.80000305175781 87.30000305175781 3
      vertex 75 82 3
      vertex 70.4470443725586 87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70.4470443725586 87.38518524169922 3
      vertex 75 82 3
      vertex 71.05000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 87.63493347167969 3
      vertex 75 82 3
      vertex 71.56776428222656 88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 88.03223419189453 3
      vertex 75 82 3
      vertex 71.9650650024414 88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 88.55000305175781 3
      vertex 75 82 3
      vertex 76.11260223388672 82.12535858154297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 88.55000305175781 3
      vertex 76.11260223388672 82.12535858154297 3
      vertex 72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 76.11260223388672 82.12535858154297 3
      vertex 77.16941833496094 82.49515533447266 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 77.16941833496094 82.49515533447266 3
      vertex 78.11744689941406 83.0908432006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 78.11744689941406 83.0908432006836 3
      vertex 78.9091567993164 83.88255310058594 3
      vertex 72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 78.9091567993164 83.88255310058594 3
      vertex 79.50484466552734 84.83058166503906 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 79.50484466552734 84.83058166503906 3
      vertex 79.87464141845703 85.88739776611328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 79.87464141845703 85.88739776611328 3
      vertex 80 87 3
      vertex 72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 80 87 3
      vertex 80 90 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 80 90 3
      vertex 72.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.30000305175781 89.80000305175781 3
      vertex 80 90 3
      vertex 79.84807586669922 91.73648071289062 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.30000305175781 89.80000305175781 3
      vertex 79.84807586669922 91.73648071289062 3
      vertex 72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 90.4470443725586 3
      vertex 79.84807586669922 91.73648071289062 3
      vertex 79.39692687988281 93.42020416259766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 90.4470443725586 3
      vertex 79.39692687988281 93.42020416259766 3
      vertex 78.6602554321289 95 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 78.6602554321289 95 3
      vertex 77.66044616699219 96.4278793334961 3
      vertex 72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 72.21481323242188 90.4470443725586 3
      vertex 77.66044616699219 96.4278793334961 3
      vertex 71.9650650024414 91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 91.05000305175781 3
      vertex 77.66044616699219 96.4278793334961 3
      vertex 76.4278793334961 97.66044616699219 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.9650650024414 91.05000305175781 3
      vertex 76.4278793334961 97.66044616699219 3
      vertex 71.56776428222656 91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 91.56776428222656 3
      vertex 76.4278793334961 97.66044616699219 3
      vertex 75 98.6602554321289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 91.56776428222656 3
      vertex 75 98.6602554321289 3
      vertex 73.42020416259766 99.39692687988281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.56776428222656 91.56776428222656 3
      vertex 73.42020416259766 99.39692687988281 3
      vertex 71.05000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 91.9650650024414 3
      vertex 73.42020416259766 99.39692687988281 3
      vertex 71.73648071289062 99.84807586669922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 71.05000305175781 91.9650650024414 3
      vertex 71.73648071289062 99.84807586669922 3
      vertex 70.4470443725586 92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70.4470443725586 92.21481323242188 3
      vertex 71.73648071289062 99.84807586669922 3
      vertex 70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70.4470443725586 92.21481323242188 3
      vertex 70 100 3
      vertex 69.80000305175781 92.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.80000305175781 92.30000305175781 3
      vertex 70 100 3
      vertex 69.1529541015625 92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.1529541015625 92.21481323242188 3
      vertex 70 100 3
      vertex 68.55000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 68.55000305175781 91.9650650024414 3
      vertex 70 100 3
      vertex 68.03223419189453 91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 68.03223419189453 91.56776428222656 3
      vertex 70 100 3
      vertex 67.63493347167969 91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.63493347167969 91.05000305175781 3
      vertex 70 100 3
      vertex 67.38518524169922 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.73648071289062 99.84807586669922 3
      vertex -70.4470443725586 92.21481323242188 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex -70.4470443725586 92.21481323242188 3
      vertex -69.80000305175781 92.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex -69.80000305175781 92.30000305175781 3
      vertex -69.1529541015625 92.21481323242188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70.4470443725586 92.21481323242188 3
      vertex -71.73648071289062 99.84807586669922 3
      vertex -71.05000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.05000305175781 91.9650650024414 3
      vertex -71.73648071289062 99.84807586669922 3
      vertex -73.42020416259766 99.39692687988281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.05000305175781 91.9650650024414 3
      vertex -73.42020416259766 99.39692687988281 3
      vertex -71.56776428222656 91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 91.56776428222656 3
      vertex -73.42020416259766 99.39692687988281 3
      vertex -75 98.6602554321289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 91.56776428222656 3
      vertex -75 98.6602554321289 3
      vertex -76.4278793334961 97.66044616699219 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 91.56776428222656 3
      vertex -76.4278793334961 97.66044616699219 3
      vertex -71.9650650024414 91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 91.05000305175781 3
      vertex -76.4278793334961 97.66044616699219 3
      vertex -77.66044616699219 96.4278793334961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 91.05000305175781 3
      vertex -77.66044616699219 96.4278793334961 3
      vertex -72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 90.4470443725586 3
      vertex -77.66044616699219 96.4278793334961 3
      vertex -78.6602554321289 95 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 90.4470443725586 3
      vertex -78.6602554321289 95 3
      vertex -79.39692687988281 93.42020416259766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -79.39692687988281 93.42020416259766 3
      vertex -79.84807586669922 91.73648071289062 3
      vertex -72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 90.4470443725586 3
      vertex -79.84807586669922 91.73648071289062 3
      vertex -72.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.30000305175781 89.80000305175781 3
      vertex -79.84807586669922 91.73648071289062 3
      vertex -80 90 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.30000305175781 89.80000305175781 3
      vertex -80 90 3
      vertex -72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -80 90 3
      vertex -80 87 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -80 87 3
      vertex -79.87464141845703 85.88739776611328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -79.87464141845703 85.88739776611328 3
      vertex -79.50484466552734 84.83058166503906 3
      vertex -72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -79.50484466552734 84.83058166503906 3
      vertex -78.9091567993164 83.88255310058594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -78.9091567993164 83.88255310058594 3
      vertex -78.11744689941406 83.0908432006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -78.11744689941406 83.0908432006836 3
      vertex -77.16941833496094 82.49515533447266 3
      vertex -72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -77.16941833496094 82.49515533447266 3
      vertex -76.11260223388672 82.12535858154297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -76.11260223388672 82.12535858154297 3
      vertex -71.9650650024414 88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 88.55000305175781 3
      vertex -76.11260223388672 82.12535858154297 3
      vertex -75 82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.9650650024414 88.55000305175781 3
      vertex -75 82 3
      vertex -71.56776428222656 88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.56776428222656 88.03223419189453 3
      vertex -75 82 3
      vertex -71.05000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -71.05000305175781 87.63493347167969 3
      vertex -75 82 3
      vertex -70.4470443725586 87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70.4470443725586 87.38518524169922 3
      vertex -75 82 3
      vertex -69.80000305175781 87.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.80000305175781 87.30000305175781 3
      vertex -75 82 3
      vertex -65 82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.80000305175781 87.30000305175781 3
      vertex -65 82 3
      vertex -69.1529541015625 87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.1529541015625 87.38518524169922 3
      vertex -65 82 3
      vertex -68.55000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.55000305175781 87.63493347167969 3
      vertex -65 82 3
      vertex -68.03223419189453 88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.03223419189453 88.03223419189453 3
      vertex -65 82 3
      vertex -67.63493347167969 88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 88.55000305175781 3
      vertex -65 82 3
      vertex -63.887393951416016 81.87464141845703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 88.55000305175781 3
      vertex -63.887393951416016 81.87464141845703 3
      vertex -67.38518524169922 89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 89.1529541015625 3
      vertex -63.887393951416016 81.87464141845703 3
      vertex -62.83058166503906 81.50484466552734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 89.1529541015625 3
      vertex -62.83058166503906 81.50484466552734 3
      vertex -67.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.30000305175781 89.80000305175781 3
      vertex -62.83058166503906 81.50484466552734 3
      vertex -61.88254928588867 80.9091567993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.30000305175781 89.80000305175781 3
      vertex -61.88254928588867 80.9091567993164 3
      vertex -67.38518524169922 90.4470443725586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 90.4470443725586 3
      vertex -61.88254928588867 80.9091567993164 3
      vertex -61.090843200683594 80.11744689941406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 90.4470443725586 3
      vertex -61.090843200683594 80.11744689941406 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex -61.090843200683594 80.11744689941406 3
      vertex -60.495155334472656 79.16941833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 -90.4470443725586 3
      vertex -61.88254928588867 -80.9091567993164 3
      vertex -67.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.30000305175781 -89.80000305175781 3
      vertex -61.88254928588867 -80.9091567993164 3
      vertex -62.83058166503906 -81.50484466552734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.30000305175781 -89.80000305175781 3
      vertex -62.83058166503906 -81.50484466552734 3
      vertex -67.38518524169922 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 -89.1529541015625 3
      vertex -62.83058166503906 -81.50484466552734 3
      vertex -63.887393951416016 -81.87464141845703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.38518524169922 -89.1529541015625 3
      vertex -63.887393951416016 -81.87464141845703 3
      vertex -67.63493347167969 -88.55000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 -88.55000305175781 3
      vertex -63.887393951416016 -81.87464141845703 3
      vertex -65 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 -88.55000305175781 3
      vertex -65 -82 3
      vertex -68.03223419189453 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.03223419189453 -88.03223419189453 3
      vertex -65 -82 3
      vertex -68.55000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -68.55000305175781 -87.63493347167969 3
      vertex -65 -82 3
      vertex -69.1529541015625 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.1529541015625 -87.38518524169922 3
      vertex -65 -82 3
      vertex -69.80000305175781 -87.30000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.80000305175781 -87.30000305175781 3
      vertex -65 -82 3
      vertex -75 -82 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.80000305175781 -87.30000305175781 3
      vertex -75 -82 3
      vertex -70.4470443725586 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70.4470443725586 -87.38518524169922 3
      vertex -75 -82 3
      vertex -71.05000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 69.1529541015625 -92.21481323242188 3
      vertex 68.55000305175781 -91.9650650024414 3
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 -100 3
      vertex 68.55000305175781 -91.9650650024414 3
      vertex 68.03223419189453 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 70 -100 3
      vertex 68.03223419189453 -91.56776428222656 3
      vertex 67.63493347167969 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 67.63493347167969 -91.05000305175781 3
      vertex 67.38518524169922 -90.4470443725586 3
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -69.1529541015625 92.21481323242188 3
      vertex -68.55000305175781 91.9650650024414 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex -68.55000305175781 91.9650650024414 3
      vertex -68.03223419189453 91.56776428222656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -70 100 3
      vertex -68.03223419189453 91.56776428222656 3
      vertex -67.63493347167969 91.05000305175781 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -67.63493347167969 91.05000305175781 3
      vertex -67.38518524169922 90.4470443725586 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal -0.9961947202682495 0.08715574443340302 0
    outer loop
      vertex -80 90 0
      vertex -80 90 3
      vertex -79.84807586669922 91.73648071289062 0
    endloop
  endfacet
  facet normal -0.9961947202682495 0.08715574443340302 0
    outer loop
      vertex -79.84807586669922 91.73648071289062 0
      vertex -80 90 3
      vertex -79.84807586669922 91.73648071289062 3
    endloop
  endfacet
  facet normal -0.9659258127212524 0.258819043636322 0
    outer loop
      vertex -79.84807586669922 91.73648071289062 0
      vertex -79.84807586669922 91.73648071289062 3
      vertex -79.39692687988281 93.42020416259766 0
    endloop
  endfacet
  facet normal -0.9659258127212524 0.258819043636322 0
    outer loop
      vertex -79.39692687988281 93.42020416259766 0
      vertex -79.84807586669922 91.73648071289062 3
      vertex -79.39692687988281 93.42020416259766 3
    endloop
  endfacet
  facet normal -0.9063078165054321 0.4226182699203491 0
    outer loop
      vertex -79.39692687988281 93.42020416259766 0
      vertex -79.39692687988281 93.42020416259766 3
      vertex -78.6602554321289 95 0
    endloop
  endfacet
  facet normal -0.9063078165054321 0.4226182699203491 0
    outer loop
      vertex -78.6602554321289 95 0
      vertex -79.39692687988281 93.42020416259766 3
      vertex -78.6602554321289 95 3
    endloop
  endfacet
  facet normal -0.8191520571708679 0.5735764503479004 0
    outer loop
      vertex -78.6602554321289 95 0
      vertex -78.6602554321289 95 3
      vertex -77.66044616699219 96.4278793334961 0
    endloop
  endfacet
  facet normal -0.8191520571708679 0.5735764503479004 0
    outer loop
      vertex -77.66044616699219 96.4278793334961 0
      vertex -78.6602554321289 95 3
      vertex -77.66044616699219 96.4278793334961 3
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -77.66044616699219 96.4278793334961 0
      vertex -77.66044616699219 96.4278793334961 3
      vertex -76.4278793334961 97.66044616699219 0
    endloop
  endfacet
  facet normal -0.7071067690849304 0.7071067690849304 0
    outer loop
      vertex -76.4278793334961 97.66044616699219 0
      vertex -77.66044616699219 96.4278793334961 3
      vertex -76.4278793334961 97.66044616699219 3
    endloop
  endfacet
  facet normal -0.5735764503479004 0.8191520571708679 0
    outer loop
      vertex -76.4278793334961 97.66044616699219 0
      vertex -76.4278793334961 97.66044616699219 3
      vertex -75 98.6602554321289 0
    endloop
  endfacet
  facet normal -0.5735764503479004 0.8191520571708679 0
    outer loop
      vertex -75 98.6602554321289 0
      vertex -76.4278793334961 97.66044616699219 3
      vertex -75 98.6602554321289 3
    endloop
  endfacet
  facet normal -0.4226182699203491 0.9063078165054321 0
    outer loop
      vertex -75 98.6602554321289 0
      vertex -75 98.6602554321289 3
      vertex -73.42020416259766 99.39692687988281 0
    endloop
  endfacet
  facet normal -0.4226182699203491 0.9063078165054321 0
    outer loop
      vertex -73.42020416259766 99.39692687988281 0
      vertex -75 98.6602554321289 3
      vertex -73.42020416259766 99.39692687988281 3
    endloop
  endfacet
  facet normal -0.258819043636322 0.9659258127212524 0
    outer loop
      vertex -73.42020416259766 99.39692687988281 0
      vertex -73.42020416259766 99.39692687988281 3
      vertex -71.73648071289062 99.84807586669922 0
    endloop
  endfacet
  facet normal -0.258819043636322 0.9659258127212524 0
    outer loop
      vertex -71.73648071289062 99.84807586669922 0
      vertex -73.42020416259766 99.39692687988281 3
      vertex -71.73648071289062 99.84807586669922 3
    endloop
  endfacet
  facet normal -0.08715574443340302 0.9961947202682495 0
    outer loop
      vertex -71.73648071289062 99.84807586669922 0
      vertex -71.73648071289062 99.84807586669922 3
      vertex -70 100 0
    endloop
  endfacet
  facet normal -0.08715574443340302 0.9961947202682495 0
    outer loop
      vertex -70 100 0
      vertex -71.73648071289062 99.84807586669922 3
      vertex -70 100 3
    endloop
  endfacet
  facet normal -0.08715574443340302 -0.9961947202682495 0
    outer loop
      vertex -70 -100 0
      vertex -70 -100 3
      vertex -71.73648071289062 -99.84807586669922 0
    endloop
  endfacet
  facet normal -0.08715574443340302 -0.9961947202682495 0
    outer loop
      vertex -71.73648071289062 -99.84807586669922 0
      vertex -70 -100 3
      vertex -71.73648071289062 -99.84807586669922 3
    endloop
  endfacet
  facet normal -0.258819043636322 -0.9659258127212524 0
    outer loop
      vertex -71.73648071289062 -99.84807586669922 0
      vertex -71.73648071289062 -99.84807586669922 3
      vertex -73.42020416259766 -99.39692687988281 0
    endloop
  endfacet
  facet normal -0.258819043636322 -0.9659258127212524 0
    outer loop
      vertex -73.42020416259766 -99.39692687988281 0
      vertex -71.73648071289062 -99.84807586669922 3
      vertex -73.42020416259766 -99.39692687988281 3
    endloop
  endfacet
  facet normal -0.4226182699203491 -0.9063078165054321 0
    outer loop
      vertex -73.42020416259766 -99.39692687988281 0
      vertex -73.42020416259766 -99.39692687988281 3
      vertex -75 -98.6602554321289 0
    endloop
  endfacet
  facet normal -0.4226182699203491 -0.9063078165054321 0
    outer loop
      vertex -75 -98.6602554321289 0
      vertex -73.42020416259766 -99.39692687988281 3
      vertex -75 -98.6602554321289 3
    endloop
  endfacet
  facet normal -0.5735764503479004 -0.8191520571708679 0
    outer loop
      vertex -75 -98.6602554321289 0
      vertex -75 -98.6602554321289 3
      vertex -76.4278793334961 -97.66044616699219 0
    endloop
  endfacet
  facet normal -0.5735764503479004 -0.8191520571708679 0
    outer loop
      vertex -76.4278793334961 -97.66044616699219 0
      vertex -75 -98.6602554321289 3
      vertex -76.4278793334961 -97.66044616699219 3
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -76.4278793334961 -97.66044616699219 0
      vertex -76.4278793334961 -97.66044616699219 3
      vertex -77.66044616699219 -96.4278793334961 0
    endloop
  endfacet
  facet normal -0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex -77.66044616699219 -96.4278793334961 0
      vertex -76.4278793334961 -97.66044616699219 3
      vertex -77.66044616699219 -96.4278793334961 3
    endloop
  endfacet
  facet normal -0.8191520571708679 -0.5735764503479004 0
    outer loop
      vertex -77.66044616699219 -96.4278793334961 0
      vertex -77.66044616699219 -96.4278793334961 3
      vertex -78.6602554321289 -95 0
    endloop
  endfacet
  facet normal -0.8191520571708679 -0.5735764503479004 0
    outer loop
      vertex -78.6602554321289 -95 0
      vertex -77.66044616699219 -96.4278793334961 3
      vertex -78.6602554321289 -95 3
    endloop
  endfacet
  facet normal -0.9063078165054321 -0.4226182699203491 0
    outer loop
      vertex -78.6602554321289 -95 0
      vertex -78.6602554321289 -95 3
      vertex -79.39692687988281 -93.42020416259766 0
    endloop
  endfacet
  facet normal -0.9063078165054321 -0.4226182699203491 -2.0019221367705443e-15
    outer loop
      vertex -79.39692687988281 -93.42020416259766 0
      vertex -78.6602554321289 -95 3
      vertex -79.39692687988281 -93.42020416259766 3
    endloop
  endfacet
  facet normal -0.9659258127212524 -0.258819043636322 -1.2260132755477667e-15
    outer loop
      vertex -79.39692687988281 -93.42020416259766 0
      vertex -79.39692687988281 -93.42020416259766 3
      vertex -79.84807586669922 -91.73648071289062 0
    endloop
  endfacet
  facet normal -0.9659258127212524 -0.258819043636322 0
    outer loop
      vertex -79.84807586669922 -91.73648071289062 0
      vertex -79.39692687988281 -93.42020416259766 3
      vertex -79.84807586669922 -91.73648071289062 3
    endloop
  endfacet
  facet normal -0.9961947202682495 -0.08715574443340302 0
    outer loop
      vertex -79.84807586669922 -91.73648071289062 0
      vertex -79.84807586669922 -91.73648071289062 3
      vertex -80 -90 0
    endloop
  endfacet
  facet normal -0.9961947202682495 -0.08715574443340302 0
    outer loop
      vertex -80 -90 0
      vertex -79.84807586669922 -91.73648071289062 3
      vertex -80 -90 3
    endloop
  endfacet
  facet normal 0.9961947202682495 -0.08715574443340302 0
    outer loop
      vertex 80 -90 0
      vertex 80 -90 3
      vertex 79.84807586669922 -91.73648071289062 0
    endloop
  endfacet
  facet normal 0.9961947202682495 -0.08715574443340302 0
    outer loop
      vertex 79.84807586669922 -91.73648071289062 0
      vertex 80 -90 3
      vertex 79.84807586669922 -91.73648071289062 3
    endloop
  endfacet
  facet normal 0.9659258127212524 -0.258819043636322 0
    outer loop
      vertex 79.84807586669922 -91.73648071289062 0
      vertex 79.84807586669922 -91.73648071289062 3
      vertex 79.39692687988281 -93.42020416259766 0
    endloop
  endfacet
  facet normal 0.9659258127212524 -0.258819043636322 0
    outer loop
      vertex 79.39692687988281 -93.42020416259766 0
      vertex 79.84807586669922 -91.73648071289062 3
      vertex 79.39692687988281 -93.42020416259766 3
    endloop
  endfacet
  facet normal 0.9063078165054321 -0.4226182699203491 0
    outer loop
      vertex 79.39692687988281 -93.42020416259766 0
      vertex 79.39692687988281 -93.42020416259766 3
      vertex 78.6602554321289 -95 0
    endloop
  endfacet
  facet normal 0.9063078165054321 -0.4226182699203491 0
    outer loop
      vertex 78.6602554321289 -95 0
      vertex 79.39692687988281 -93.42020416259766 3
      vertex 78.6602554321289 -95 3
    endloop
  endfacet
  facet normal 0.8191520571708679 -0.5735764503479004 0
    outer loop
      vertex 78.6602554321289 -95 0
      vertex 78.6602554321289 -95 3
      vertex 77.66044616699219 -96.4278793334961 0
    endloop
  endfacet
  facet normal 0.8191520571708679 -0.5735764503479004 0
    outer loop
      vertex 77.66044616699219 -96.4278793334961 0
      vertex 78.6602554321289 -95 3
      vertex 77.66044616699219 -96.4278793334961 3
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 77.66044616699219 -96.4278793334961 0
      vertex 77.66044616699219 -96.4278793334961 3
      vertex 76.4278793334961 -97.66044616699219 0
    endloop
  endfacet
  facet normal 0.7071067690849304 -0.7071067690849304 0
    outer loop
      vertex 76.4278793334961 -97.66044616699219 0
      vertex 77.66044616699219 -96.4278793334961 3
      vertex 76.4278793334961 -97.66044616699219 3
    endloop
  endfacet
  facet normal 0.5735764503479004 -0.8191520571708679 0
    outer loop
      vertex 76.4278793334961 -97.66044616699219 0
      vertex 76.4278793334961 -97.66044616699219 3
      vertex 75 -98.6602554321289 0
    endloop
  endfacet
  facet normal 0.5735764503479004 -0.8191520571708679 0
    outer loop
      vertex 75 -98.6602554321289 0
      vertex 76.4278793334961 -97.66044616699219 3
      vertex 75 -98.6602554321289 3
    endloop
  endfacet
  facet normal 0.4226182699203491 -0.9063078165054321 0
    outer loop
      vertex 75 -98.6602554321289 0
      vertex 75 -98.6602554321289 3
      vertex 73.42020416259766 -99.39692687988281 0
    endloop
  endfacet
  facet normal 0.4226182699203491 -0.9063078165054321 0
    outer loop
      vertex 73.42020416259766 -99.39692687988281 0
      vertex 75 -98.6602554321289 3
      vertex 73.42020416259766 -99.39692687988281 3
    endloop
  endfacet
  facet normal 0.258819043636322 -0.9659258127212524 0
    outer loop
      vertex 73.42020416259766 -99.39692687988281 0
      vertex 73.42020416259766 -99.39692687988281 3
      vertex 71.73648071289062 -99.84807586669922 0
    endloop
  endfacet
  facet normal 0.258819043636322 -0.9659258127212524 0
    outer loop
      vertex 71.73648071289062 -99.84807586669922 0
      vertex 73.42020416259766 -99.39692687988281 3
      vertex 71.73648071289062 -99.84807586669922 3
    endloop
  endfacet
  facet normal 0.08715574443340302 -0.9961947202682495 0
    outer loop
      vertex 71.73648071289062 -99.84807586669922 0
      vertex 71.73648071289062 -99.84807586669922 3
      vertex 70 -100 0
    endloop
  endfacet
  facet normal 0.08715574443340302 -0.9961947202682495 0
    outer loop
      vertex 70 -100 0
      vertex 71.73648071289062 -99.84807586669922 3
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 67.38518524169922 89.1529541015625 3
      vertex 67.38518524169922 89.1529541015625 0
      vertex 67.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 67.30000305175781 89.80000305175781 3
      vertex 67.38518524169922 89.1529541015625 0
      vertex 67.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 67.30000305175781 89.80000305175781 3
      vertex 67.30000305175781 89.80000305175781 0
      vertex 67.38518524169922 90.4470443725586 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 67.38518524169922 90.4470443725586 3
      vertex 67.30000305175781 89.80000305175781 0
      vertex 67.38518524169922 90.4470443725586 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 67.38518524169922 90.4470443725586 3
      vertex 67.38518524169922 90.4470443725586 0
      vertex 67.63493347167969 91.05000305175781 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 67.63493347167969 91.05000305175781 3
      vertex 67.38518524169922 90.4470443725586 0
      vertex 67.63493347167969 91.05000305175781 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 67.63493347167969 91.05000305175781 3
      vertex 67.63493347167969 91.05000305175781 0
      vertex 68.03223419189453 91.56776428222656 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 68.03223419189453 91.56776428222656 3
      vertex 67.63493347167969 91.05000305175781 0
      vertex 68.03223419189453 91.56776428222656 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 68.03223419189453 91.56776428222656 3
      vertex 68.03223419189453 91.56776428222656 0
      vertex 68.55000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 68.55000305175781 91.9650650024414 3
      vertex 68.03223419189453 91.56776428222656 0
      vertex 68.55000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 68.55000305175781 91.9650650024414 3
      vertex 68.55000305175781 91.9650650024414 0
      vertex 69.1529541015625 92.21481323242188 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 69.1529541015625 92.21481323242188 3
      vertex 68.55000305175781 91.9650650024414 0
      vertex 69.1529541015625 92.21481323242188 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.1529541015625 92.21481323242188 3
      vertex 69.1529541015625 92.21481323242188 0
      vertex 69.80000305175781 92.30000305175781 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 92.30000305175781 3
      vertex 69.1529541015625 92.21481323242188 0
      vertex 69.80000305175781 92.30000305175781 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 92.30000305175781 3
      vertex 69.80000305175781 92.30000305175781 0
      vertex 70.4470443725586 92.21481323242188 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 70.4470443725586 92.21481323242188 3
      vertex 69.80000305175781 92.30000305175781 0
      vertex 70.4470443725586 92.21481323242188 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 70.4470443725586 92.21481323242188 3
      vertex 70.4470443725586 92.21481323242188 0
      vertex 71.05000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 71.05000305175781 91.9650650024414 3
      vertex 70.4470443725586 92.21481323242188 0
      vertex 71.05000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 71.05000305175781 91.9650650024414 3
      vertex 71.05000305175781 91.9650650024414 0
      vertex 71.56776428222656 91.56776428222656 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 71.56776428222656 91.56776428222656 3
      vertex 71.05000305175781 91.9650650024414 0
      vertex 71.56776428222656 91.56776428222656 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 71.56776428222656 91.56776428222656 3
      vertex 71.56776428222656 91.56776428222656 0
      vertex 71.9650650024414 91.05000305175781 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 71.9650650024414 91.05000305175781 3
      vertex 71.56776428222656 91.56776428222656 0
      vertex 71.9650650024414 91.05000305175781 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 71.9650650024414 91.05000305175781 3
      vertex 71.9650650024414 91.05000305175781 0
      vertex 72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 72.21481323242188 90.4470443725586 3
      vertex 71.9650650024414 91.05000305175781 0
      vertex 72.21481323242188 90.4470443725586 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 72.21481323242188 90.4470443725586 3
      vertex 72.21481323242188 90.4470443725586 0
      vertex 72.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 72.30000305175781 89.80000305175781 3
      vertex 72.21481323242188 90.4470443725586 0
      vertex 72.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 72.30000305175781 89.80000305175781 3
      vertex 72.30000305175781 89.80000305175781 0
      vertex 72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 72.30000305175781 89.80000305175781 0
      vertex 72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 72.21481323242188 89.1529541015625 3
      vertex 72.21481323242188 89.1529541015625 0
      vertex 71.9650650024414 88.55000305175781 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 71.9650650024414 88.55000305175781 3
      vertex 72.21481323242188 89.1529541015625 0
      vertex 71.9650650024414 88.55000305175781 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 71.9650650024414 88.55000305175781 3
      vertex 71.9650650024414 88.55000305175781 0
      vertex 71.56776428222656 88.03223419189453 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 71.56776428222656 88.03223419189453 3
      vertex 71.9650650024414 88.55000305175781 0
      vertex 71.56776428222656 88.03223419189453 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 71.56776428222656 88.03223419189453 3
      vertex 71.56776428222656 88.03223419189453 0
      vertex 71.05000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 71.05000305175781 87.63493347167969 3
      vertex 71.56776428222656 88.03223419189453 0
      vertex 71.05000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 71.05000305175781 87.63493347167969 3
      vertex 71.05000305175781 87.63493347167969 0
      vertex 70.4470443725586 87.38518524169922 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 70.4470443725586 87.38518524169922 3
      vertex 71.05000305175781 87.63493347167969 0
      vertex 70.4470443725586 87.38518524169922 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 70.4470443725586 87.38518524169922 3
      vertex 70.4470443725586 87.38518524169922 0
      vertex 69.80000305175781 87.30000305175781 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 87.30000305175781 3
      vertex 70.4470443725586 87.38518524169922 0
      vertex 69.80000305175781 87.30000305175781 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 87.30000305175781 3
      vertex 69.80000305175781 87.30000305175781 0
      vertex 69.1529541015625 87.38518524169922 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.1529541015625 87.38518524169922 3
      vertex 69.80000305175781 87.30000305175781 0
      vertex 69.1529541015625 87.38518524169922 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 69.1529541015625 87.38518524169922 3
      vertex 69.1529541015625 87.38518524169922 0
      vertex 68.55000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 68.55000305175781 87.63493347167969 3
      vertex 69.1529541015625 87.38518524169922 0
      vertex 68.55000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 68.55000305175781 87.63493347167969 3
      vertex 68.55000305175781 87.63493347167969 0
      vertex 68.03223419189453 88.03223419189453 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 68.03223419189453 88.03223419189453 3
      vertex 68.55000305175781 87.63493347167969 0
      vertex 68.03223419189453 88.03223419189453 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 68.03223419189453 88.03223419189453 3
      vertex 68.03223419189453 88.03223419189453 0
      vertex 67.63493347167969 88.55000305175781 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 67.63493347167969 88.55000305175781 3
      vertex 68.03223419189453 88.03223419189453 0
      vertex 67.63493347167969 88.55000305175781 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 67.63493347167969 88.55000305175781 3
      vertex 67.63493347167969 88.55000305175781 0
      vertex 67.38518524169922 89.1529541015625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 67.38518524169922 89.1529541015625 3
      vertex 67.63493347167969 88.55000305175781 0
      vertex 67.38518524169922 89.1529541015625 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -72.21481323242188 89.1529541015625 0
      vertex -72.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -72.30000305175781 89.80000305175781 3
      vertex -72.21481323242188 89.1529541015625 0
      vertex -72.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -72.30000305175781 89.80000305175781 3
      vertex -72.30000305175781 89.80000305175781 0
      vertex -72.21481323242188 90.4470443725586 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -72.21481323242188 90.4470443725586 3
      vertex -72.30000305175781 89.80000305175781 0
      vertex -72.21481323242188 90.4470443725586 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -72.21481323242188 90.4470443725586 3
      vertex -72.21481323242188 90.4470443725586 0
      vertex -71.9650650024414 91.05000305175781 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -71.9650650024414 91.05000305175781 3
      vertex -72.21481323242188 90.4470443725586 0
      vertex -71.9650650024414 91.05000305175781 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -71.9650650024414 91.05000305175781 3
      vertex -71.9650650024414 91.05000305175781 0
      vertex -71.56776428222656 91.56776428222656 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -71.56776428222656 91.56776428222656 3
      vertex -71.9650650024414 91.05000305175781 0
      vertex -71.56776428222656 91.56776428222656 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -71.56776428222656 91.56776428222656 3
      vertex -71.56776428222656 91.56776428222656 0
      vertex -71.05000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -71.05000305175781 91.9650650024414 3
      vertex -71.56776428222656 91.56776428222656 0
      vertex -71.05000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -71.05000305175781 91.9650650024414 3
      vertex -71.05000305175781 91.9650650024414 0
      vertex -70.4470443725586 92.21481323242188 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -70.4470443725586 92.21481323242188 3
      vertex -71.05000305175781 91.9650650024414 0
      vertex -70.4470443725586 92.21481323242188 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -70.4470443725586 92.21481323242188 3
      vertex -70.4470443725586 92.21481323242188 0
      vertex -69.80000305175781 92.30000305175781 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 92.30000305175781 3
      vertex -70.4470443725586 92.21481323242188 0
      vertex -69.80000305175781 92.30000305175781 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 92.30000305175781 3
      vertex -69.80000305175781 92.30000305175781 0
      vertex -69.1529541015625 92.21481323242188 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.1529541015625 92.21481323242188 3
      vertex -69.80000305175781 92.30000305175781 0
      vertex -69.1529541015625 92.21481323242188 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -69.1529541015625 92.21481323242188 3
      vertex -69.1529541015625 92.21481323242188 0
      vertex -68.55000305175781 91.9650650024414 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -68.55000305175781 91.9650650024414 3
      vertex -69.1529541015625 92.21481323242188 0
      vertex -68.55000305175781 91.9650650024414 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -68.55000305175781 91.9650650024414 3
      vertex -68.55000305175781 91.9650650024414 0
      vertex -68.03223419189453 91.56776428222656 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -68.03223419189453 91.56776428222656 3
      vertex -68.55000305175781 91.9650650024414 0
      vertex -68.03223419189453 91.56776428222656 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -68.03223419189453 91.56776428222656 3
      vertex -68.03223419189453 91.56776428222656 0
      vertex -67.63493347167969 91.05000305175781 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -67.63493347167969 91.05000305175781 3
      vertex -68.03223419189453 91.56776428222656 0
      vertex -67.63493347167969 91.05000305175781 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -67.63493347167969 91.05000305175781 3
      vertex -67.63493347167969 91.05000305175781 0
      vertex -67.38518524169922 90.4470443725586 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -67.38518524169922 90.4470443725586 3
      vertex -67.63493347167969 91.05000305175781 0
      vertex -67.38518524169922 90.4470443725586 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -67.38518524169922 90.4470443725586 3
      vertex -67.38518524169922 90.4470443725586 0
      vertex -67.30000305175781 89.80000305175781 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -67.30000305175781 89.80000305175781 3
      vertex -67.38518524169922 90.4470443725586 0
      vertex -67.30000305175781 89.80000305175781 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -67.30000305175781 89.80000305175781 3
      vertex -67.30000305175781 89.80000305175781 0
      vertex -67.38518524169922 89.1529541015625 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -67.38518524169922 89.1529541015625 3
      vertex -67.30000305175781 89.80000305175781 0
      vertex -67.38518524169922 89.1529541015625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -67.38518524169922 89.1529541015625 3
      vertex -67.38518524169922 89.1529541015625 0
      vertex -67.63493347167969 88.55000305175781 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -67.63493347167969 88.55000305175781 3
      vertex -67.38518524169922 89.1529541015625 0
      vertex -67.63493347167969 88.55000305175781 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -67.63493347167969 88.55000305175781 3
      vertex -67.63493347167969 88.55000305175781 0
      vertex -68.03223419189453 88.03223419189453 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -68.03223419189453 88.03223419189453 3
      vertex -67.63493347167969 88.55000305175781 0
      vertex -68.03223419189453 88.03223419189453 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -68.03223419189453 88.03223419189453 3
      vertex -68.03223419189453 88.03223419189453 0
      vertex -68.55000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -68.55000305175781 87.63493347167969 3
      vertex -68.03223419189453 88.03223419189453 0
      vertex -68.55000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -68.55000305175781 87.63493347167969 3
      vertex -68.55000305175781 87.63493347167969 0
      vertex -69.1529541015625 87.38518524169922 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -69.1529541015625 87.38518524169922 3
      vertex -68.55000305175781 87.63493347167969 0
      vertex -69.1529541015625 87.38518524169922 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.1529541015625 87.38518524169922 3
      vertex -69.1529541015625 87.38518524169922 0
      vertex -69.80000305175781 87.30000305175781 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 87.30000305175781 3
      vertex -69.1529541015625 87.38518524169922 0
      vertex -69.80000305175781 87.30000305175781 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 87.30000305175781 3
      vertex -69.80000305175781 87.30000305175781 0
      vertex -70.4470443725586 87.38518524169922 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -70.4470443725586 87.38518524169922 3
      vertex -69.80000305175781 87.30000305175781 0
      vertex -70.4470443725586 87.38518524169922 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -70.4470443725586 87.38518524169922 3
      vertex -70.4470443725586 87.38518524169922 0
      vertex -71.05000305175781 87.63493347167969 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -71.05000305175781 87.63493347167969 3
      vertex -70.4470443725586 87.38518524169922 0
      vertex -71.05000305175781 87.63493347167969 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -71.05000305175781 87.63493347167969 3
      vertex -71.05000305175781 87.63493347167969 0
      vertex -71.56776428222656 88.03223419189453 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -71.56776428222656 88.03223419189453 3
      vertex -71.05000305175781 87.63493347167969 0
      vertex -71.56776428222656 88.03223419189453 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -71.56776428222656 88.03223419189453 3
      vertex -71.56776428222656 88.03223419189453 0
      vertex -71.9650650024414 88.55000305175781 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -71.9650650024414 88.55000305175781 3
      vertex -71.56776428222656 88.03223419189453 0
      vertex -71.9650650024414 88.55000305175781 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -71.9650650024414 88.55000305175781 3
      vertex -71.9650650024414 88.55000305175781 0
      vertex -72.21481323242188 89.1529541015625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -72.21481323242188 89.1529541015625 3
      vertex -71.9650650024414 88.55000305175781 0
      vertex -72.21481323242188 89.1529541015625 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 67.38518524169922 -90.4470443725586 3
      vertex 67.38518524169922 -90.4470443725586 0
      vertex 67.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 67.30000305175781 -89.80000305175781 3
      vertex 67.38518524169922 -90.4470443725586 0
      vertex 67.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 67.30000305175781 -89.80000305175781 3
      vertex 67.30000305175781 -89.80000305175781 0
      vertex 67.38518524169922 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 67.38518524169922 -89.1529541015625 3
      vertex 67.30000305175781 -89.80000305175781 0
      vertex 67.38518524169922 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 67.38518524169922 -89.1529541015625 3
      vertex 67.38518524169922 -89.1529541015625 0
      vertex 67.63493347167969 -88.55000305175781 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 67.63493347167969 -88.55000305175781 3
      vertex 67.38518524169922 -89.1529541015625 0
      vertex 67.63493347167969 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 67.63493347167969 -88.55000305175781 3
      vertex 67.63493347167969 -88.55000305175781 0
      vertex 68.03223419189453 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 68.03223419189453 -88.03223419189453 3
      vertex 67.63493347167969 -88.55000305175781 0
      vertex 68.03223419189453 -88.03223419189453 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 68.03223419189453 -88.03223419189453 3
      vertex 68.03223419189453 -88.03223419189453 0
      vertex 68.55000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 68.55000305175781 -87.63493347167969 3
      vertex 68.03223419189453 -88.03223419189453 0
      vertex 68.55000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 68.55000305175781 -87.63493347167969 3
      vertex 68.55000305175781 -87.63493347167969 0
      vertex 69.1529541015625 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 69.1529541015625 -87.38518524169922 3
      vertex 68.55000305175781 -87.63493347167969 0
      vertex 69.1529541015625 -87.38518524169922 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.1529541015625 -87.38518524169922 3
      vertex 69.1529541015625 -87.38518524169922 0
      vertex 69.80000305175781 -87.30000305175781 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 -87.30000305175781 3
      vertex 69.1529541015625 -87.38518524169922 0
      vertex 69.80000305175781 -87.30000305175781 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 -87.30000305175781 3
      vertex 69.80000305175781 -87.30000305175781 0
      vertex 70.4470443725586 -87.38518524169922 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 70.4470443725586 -87.38518524169922 3
      vertex 69.80000305175781 -87.30000305175781 0
      vertex 70.4470443725586 -87.38518524169922 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 70.4470443725586 -87.38518524169922 3
      vertex 70.4470443725586 -87.38518524169922 0
      vertex 71.05000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 71.05000305175781 -87.63493347167969 3
      vertex 70.4470443725586 -87.38518524169922 0
      vertex 71.05000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 71.05000305175781 -87.63493347167969 3
      vertex 71.05000305175781 -87.63493347167969 0
      vertex 71.56776428222656 -88.03223419189453 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 71.56776428222656 -88.03223419189453 3
      vertex 71.05000305175781 -87.63493347167969 0
      vertex 71.56776428222656 -88.03223419189453 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 71.56776428222656 -88.03223419189453 3
      vertex 71.56776428222656 -88.03223419189453 0
      vertex 71.9650650024414 -88.55000305175781 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 71.9650650024414 -88.55000305175781 3
      vertex 71.56776428222656 -88.03223419189453 0
      vertex 71.9650650024414 -88.55000305175781 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 71.9650650024414 -88.55000305175781 3
      vertex 71.9650650024414 -88.55000305175781 0
      vertex 72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 71.9650650024414 -88.55000305175781 0
      vertex 72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 72.21481323242188 -89.1529541015625 3
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 72.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 72.30000305175781 -89.80000305175781 3
      vertex 72.21481323242188 -89.1529541015625 0
      vertex 72.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 72.30000305175781 -89.80000305175781 3
      vertex 72.30000305175781 -89.80000305175781 0
      vertex 72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 72.21481323242188 -90.4470443725586 3
      vertex 72.30000305175781 -89.80000305175781 0
      vertex 72.21481323242188 -90.4470443725586 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 72.21481323242188 -90.4470443725586 3
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 71.9650650024414 -91.05000305175781 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 71.9650650024414 -91.05000305175781 3
      vertex 72.21481323242188 -90.4470443725586 0
      vertex 71.9650650024414 -91.05000305175781 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 71.9650650024414 -91.05000305175781 3
      vertex 71.9650650024414 -91.05000305175781 0
      vertex 71.56776428222656 -91.56776428222656 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 71.56776428222656 -91.56776428222656 3
      vertex 71.9650650024414 -91.05000305175781 0
      vertex 71.56776428222656 -91.56776428222656 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 71.56776428222656 -91.56776428222656 3
      vertex 71.56776428222656 -91.56776428222656 0
      vertex 71.05000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 71.05000305175781 -91.9650650024414 3
      vertex 71.56776428222656 -91.56776428222656 0
      vertex 71.05000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 71.05000305175781 -91.9650650024414 3
      vertex 71.05000305175781 -91.9650650024414 0
      vertex 70.4470443725586 -92.21481323242188 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 70.4470443725586 -92.21481323242188 3
      vertex 71.05000305175781 -91.9650650024414 0
      vertex 70.4470443725586 -92.21481323242188 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 70.4470443725586 -92.21481323242188 3
      vertex 70.4470443725586 -92.21481323242188 0
      vertex 69.80000305175781 -92.30000305175781 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 -92.30000305175781 3
      vertex 70.4470443725586 -92.21481323242188 0
      vertex 69.80000305175781 -92.30000305175781 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.80000305175781 -92.30000305175781 3
      vertex 69.80000305175781 -92.30000305175781 0
      vertex 69.1529541015625 -92.21481323242188 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 69.1529541015625 -92.21481323242188 3
      vertex 69.80000305175781 -92.30000305175781 0
      vertex 69.1529541015625 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 69.1529541015625 -92.21481323242188 3
      vertex 69.1529541015625 -92.21481323242188 0
      vertex 68.55000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 68.55000305175781 -91.9650650024414 3
      vertex 69.1529541015625 -92.21481323242188 0
      vertex 68.55000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 68.55000305175781 -91.9650650024414 3
      vertex 68.55000305175781 -91.9650650024414 0
      vertex 68.03223419189453 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 68.03223419189453 -91.56776428222656 3
      vertex 68.55000305175781 -91.9650650024414 0
      vertex 68.03223419189453 -91.56776428222656 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 68.03223419189453 -91.56776428222656 3
      vertex 68.03223419189453 -91.56776428222656 0
      vertex 67.63493347167969 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 67.63493347167969 -91.05000305175781 3
      vertex 68.03223419189453 -91.56776428222656 0
      vertex 67.63493347167969 -91.05000305175781 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 67.63493347167969 -91.05000305175781 3
      vertex 67.63493347167969 -91.05000305175781 0
      vertex 67.38518524169922 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 67.38518524169922 -90.4470443725586 3
      vertex 67.63493347167969 -91.05000305175781 0
      vertex 67.38518524169922 -90.4470443725586 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -72.21481323242188 -90.4470443725586 3
      vertex -72.21481323242188 -90.4470443725586 0
      vertex -72.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -72.30000305175781 -89.80000305175781 3
      vertex -72.21481323242188 -90.4470443725586 0
      vertex -72.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -72.30000305175781 -89.80000305175781 3
      vertex -72.30000305175781 -89.80000305175781 0
      vertex -72.21481323242188 -89.1529541015625 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -72.30000305175781 -89.80000305175781 0
      vertex -72.21481323242188 -89.1529541015625 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -72.21481323242188 -89.1529541015625 3
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -71.9650650024414 -88.55000305175781 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -71.9650650024414 -88.55000305175781 3
      vertex -72.21481323242188 -89.1529541015625 0
      vertex -71.9650650024414 -88.55000305175781 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -71.9650650024414 -88.55000305175781 3
      vertex -71.9650650024414 -88.55000305175781 0
      vertex -71.56776428222656 -88.03223419189453 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -71.56776428222656 -88.03223419189453 3
      vertex -71.9650650024414 -88.55000305175781 0
      vertex -71.56776428222656 -88.03223419189453 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -71.56776428222656 -88.03223419189453 3
      vertex -71.56776428222656 -88.03223419189453 0
      vertex -71.05000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -71.05000305175781 -87.63493347167969 3
      vertex -71.56776428222656 -88.03223419189453 0
      vertex -71.05000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -71.05000305175781 -87.63493347167969 3
      vertex -71.05000305175781 -87.63493347167969 0
      vertex -70.4470443725586 -87.38518524169922 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -70.4470443725586 -87.38518524169922 3
      vertex -71.05000305175781 -87.63493347167969 0
      vertex -70.4470443725586 -87.38518524169922 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -70.4470443725586 -87.38518524169922 3
      vertex -70.4470443725586 -87.38518524169922 0
      vertex -69.80000305175781 -87.30000305175781 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 -87.30000305175781 3
      vertex -70.4470443725586 -87.38518524169922 0
      vertex -69.80000305175781 -87.30000305175781 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 -87.30000305175781 3
      vertex -69.80000305175781 -87.30000305175781 0
      vertex -69.1529541015625 -87.38518524169922 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex -69.1529541015625 -87.38518524169922 3
      vertex -69.80000305175781 -87.30000305175781 0
      vertex -69.1529541015625 -87.38518524169922 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -69.1529541015625 -87.38518524169922 3
      vertex -69.1529541015625 -87.38518524169922 0
      vertex -68.55000305175781 -87.63493347167969 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex -68.55000305175781 -87.63493347167969 3
      vertex -69.1529541015625 -87.38518524169922 0
      vertex -68.55000305175781 -87.63493347167969 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -68.55000305175781 -87.63493347167969 3
      vertex -68.55000305175781 -87.63493347167969 0
      vertex -68.03223419189453 -88.03223419189453 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex -68.03223419189453 -88.03223419189453 3
      vertex -68.55000305175781 -87.63493347167969 0
      vertex -68.03223419189453 -88.03223419189453 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -68.03223419189453 -88.03223419189453 3
      vertex -68.03223419189453 -88.03223419189453 0
      vertex -67.63493347167969 -88.55000305175781 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex -67.63493347167969 -88.55000305175781 3
      vertex -68.03223419189453 -88.03223419189453 0
      vertex -67.63493347167969 -88.55000305175781 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -67.63493347167969 -88.55000305175781 3
      vertex -67.63493347167969 -88.55000305175781 0
      vertex -67.38518524169922 -89.1529541015625 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex -67.38518524169922 -89.1529541015625 3
      vertex -67.63493347167969 -88.55000305175781 0
      vertex -67.38518524169922 -89.1529541015625 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -67.38518524169922 -89.1529541015625 3
      vertex -67.38518524169922 -89.1529541015625 0
      vertex -67.30000305175781 -89.80000305175781 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex -67.30000305175781 -89.80000305175781 3
      vertex -67.38518524169922 -89.1529541015625 0
      vertex -67.30000305175781 -89.80000305175781 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -67.30000305175781 -89.80000305175781 3
      vertex -67.30000305175781 -89.80000305175781 0
      vertex -67.38518524169922 -90.4470443725586 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex -67.38518524169922 -90.4470443725586 3
      vertex -67.30000305175781 -89.80000305175781 0
      vertex -67.38518524169922 -90.4470443725586 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -67.38518524169922 -90.4470443725586 3
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -67.63493347167969 -91.05000305175781 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -67.63493347167969 -91.05000305175781 3
      vertex -67.38518524169922 -90.4470443725586 0
      vertex -67.63493347167969 -91.05000305175781 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -67.63493347167969 -91.05000305175781 3
      vertex -67.63493347167969 -91.05000305175781 0
      vertex -68.03223419189453 -91.56776428222656 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -68.03223419189453 -91.56776428222656 3
      vertex -67.63493347167969 -91.05000305175781 0
      vertex -68.03223419189453 -91.56776428222656 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -68.03223419189453 -91.56776428222656 3
      vertex -68.03223419189453 -91.56776428222656 0
      vertex -68.55000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -68.55000305175781 -91.9650650024414 3
      vertex -68.03223419189453 -91.56776428222656 0
      vertex -68.55000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -68.55000305175781 -91.9650650024414 3
      vertex -68.55000305175781 -91.9650650024414 0
      vertex -69.1529541015625 -92.21481323242188 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -69.1529541015625 -92.21481323242188 3
      vertex -68.55000305175781 -91.9650650024414 0
      vertex -69.1529541015625 -92.21481323242188 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.1529541015625 -92.21481323242188 3
      vertex -69.1529541015625 -92.21481323242188 0
      vertex -69.80000305175781 -92.30000305175781 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 -92.30000305175781 3
      vertex -69.1529541015625 -92.21481323242188 0
      vertex -69.80000305175781 -92.30000305175781 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -69.80000305175781 -92.30000305175781 3
      vertex -69.80000305175781 -92.30000305175781 0
      vertex -70.4470443725586 -92.21481323242188 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex -70.4470443725586 -92.21481323242188 3
      vertex -69.80000305175781 -92.30000305175781 0
      vertex -70.4470443725586 -92.21481323242188 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -70.4470443725586 -92.21481323242188 3
      vertex -70.4470443725586 -92.21481323242188 0
      vertex -71.05000305175781 -91.9650650024414 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex -71.05000305175781 -91.9650650024414 3
      vertex -70.4470443725586 -92.21481323242188 0
      vertex -71.05000305175781 -91.9650650024414 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -71.05000305175781 -91.9650650024414 3
      vertex -71.05000305175781 -91.9650650024414 0
      vertex -71.56776428222656 -91.56776428222656 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex -71.56776428222656 -91.56776428222656 3
      vertex -71.05000305175781 -91.9650650024414 0
      vertex -71.56776428222656 -91.56776428222656 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -71.56776428222656 -91.56776428222656 3
      vertex -71.56776428222656 -91.56776428222656 0
      vertex -71.9650650024414 -91.05000305175781 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex -71.9650650024414 -91.05000305175781 3
      vertex -71.56776428222656 -91.56776428222656 0
      vertex -71.9650650024414 -91.05000305175781 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -71.9650650024414 -91.05000305175781 3
      vertex -71.9650650024414 -91.05000305175781 0
      vertex -72.21481323242188 -90.4470443725586 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex -72.21481323242188 -90.4470443725586 3
      vertex -71.9650650024414 -91.05000305175781 0
      vertex -72.21481323242188 -90.4470443725586 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -70 -100 0
      vertex 70 -100 0
      vertex -70 -100 3
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex -70 -100 3
      vertex 70 -100 0
      vertex 70 -100 3
    endloop
  endfacet
  facet normal 1.015061056757953e-16 1 0
    outer loop
      vertex 70 100 0
      vertex -70 100 0
      vertex 70 100 3
    endloop
  endfacet
  facet normal 1.015061056757953e-16 1 0
    outer loop
      vertex 70 100 3
      vertex -70 100 0
      vertex -70 100 3
    endloop
  endfacet
endsolid STLB ATF 12.14.0.127 COLOR=                                                      

```