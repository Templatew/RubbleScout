# Weekly Report N°3 for RubbleScout Project
School year 2023-2024

## Project Overview
- **Title:** RubbleScout
- **Tagline:** "Navigating Chaos Saving Lives"
- **Student:** Lorenz CAZAUBON
- **Supervisor:** Pascal MASSON
- **Institution:** Ecole Polytechnique Universitaire de Nice Sophia-Antipolis, Robotics Specialty (Autonomous Systems)
- **Location:** 930 route des Colles, 06410 BIOT France

## Session Summary
- **Chassis Assembly and Testing:**
  - Received and assembled the tracked chassis.
  - Conducted an initial functional test of the locomotion system using a dual channel DC motor driver.
  - A short video of this test is available.

- **Power Supply Solution:**
  - Found a solution to power the Arduino board and motors with a single power supply using wire connectors.

- **Progress in Component Assembly:**
  - Spent significant time wiring and soldering components like the Arduino motor driver.
  - Successfully powered up and connected all components.

- **Lidar Module Development:**
  - Started modeling the main part of the Lidar module for 3D printing.
  - Planning to integrate this technology into the project.
  ```stl
  solid STLB ATF 12.14.0.127 COLOR=                                                      
  facet normal -0.9034254550933838 -0.42874521017074585 0
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -9.447736740112305 16.061153411865234 3
      vertex -9.751304626464844 16.7008113861084 0
    endloop
  endfacet
  facet normal -0.9034254550933838 -0.42874521017074585 0
    outer loop
      vertex -9.751304626464844 16.7008113861084 0
      vertex -9.447736740112305 16.061153411865234 3
      vertex -9.751304626464844 16.7008113861084 3
    endloop
  endfacet
  facet normal -0.9648663401603699 -0.2627411186695099 0
    outer loop
      vertex -9.751304626464844 16.7008113861084 0
      vertex -9.751304626464844 16.7008113861084 3
      vertex -9.937335014343262 17.383974075317383 0
    endloop
  endfacet
  facet normal -0.9648663401603699 -0.2627411186695099 0
    outer loop
      vertex -9.937335014343262 17.383974075317383 0
      vertex -9.751304626464844 16.7008113861084 3
      vertex -9.937335014343262 17.383974075317383 3
    endloop
  endfacet
  facet normal -0.9960757493972778 -0.08850472420454025 0
    outer loop
      vertex -9.937335014343262 17.383974075317383 0
      vertex -9.937335014343262 17.383974075317383 3
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal -0.9960757493972778 -0.08850472420454025 0
    outer loop
      vertex -10 18.0892333984375 0
      vertex -9.937335014343262 17.383974075317383 3
      vertex -10 18.0892333984375 3
    endloop
  endfacet
  facet normal -0.861934244632721 -0.507020115852356 0
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex -9.447736740112305 16.061153411865234 3
    endloop
  endfacet
  facet normal -0.861934244632721 -0.507020115852356 0
    outer loop
      vertex -9.447736740112305 16.061153411865234 3
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex -1.1599526405334473 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 10.064482688903809 21.18931007385254 0
      vertex 10 20 0
      vertex -3.015770673751831 21.74933433532715 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.015770673751831 21.74933433532715 0
      vertex 10 20 0
      vertex 10.064482688903809 18.81068992614746 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.015770673751831 21.74933433532715 0
      vertex 10.064482688903809 18.81068992614746 0
      vertex -3.1404471397399902 21.263750076293945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.1404471397399902 21.263750076293945 0
      vertex 10.064482688903809 18.81068992614746 0
      vertex 10.257173538208008 17.635324478149414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.1404471397399902 21.263750076293945 0
      vertex 10.257173538208008 17.635324478149414 0
      vertex 5.375 6.082531929016113 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.375 6.082531929016113 0
      vertex 10.257173538208008 17.635324478149414 0
      vertex 5.676476001739502 6.207407474517822 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 6.207407474517822 0
      vertex 10.257173538208008 17.635324478149414 0
      vertex 10.575815200805664 16.487682342529297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 6.207407474517822 0
      vertex 10.575815200805664 16.487682342529297 0
      vertex 6 6.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6 6.25 0
      vertex 10.575815200805664 16.487682342529297 0
      vertex 11.016670227050781 15.381219863891602 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6 6.25 0
      vertex 11.016670227050781 15.381219863891602 0
      vertex 6.323523998260498 6.207407474517822 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.323523998260498 6.207407474517822 0
      vertex 11.016670227050781 15.381219863891602 0
      vertex 6.625 6.082531929016113 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 6.082531929016113 0
      vertex 11.016670227050781 15.381219863891602 0
      vertex 11.574570655822754 14.32890796661377 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 6.082531929016113 0
      vertex 11.574570655822754 14.32890796661377 0
      vertex 6.883883476257324 5.883883476257324 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 5.883883476257324 0
      vertex 11.574570655822754 14.32890796661377 0
      vertex 12.242976188659668 13.343083381652832 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 5.883883476257324 0
      vertex 12.242976188659668 13.343083381652832 0
      vertex 7.082531929016113 5.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 5.625 0
      vertex 12.242976188659668 13.343083381652832 0
      vertex 13.014049530029297 12.43530559539795 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 5.625 0
      vertex 13.014049530029297 12.43530559539795 0
      vertex 7.207407474517822 5.323523998260498 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 5.323523998260498 0
      vertex 13.014049530029297 12.43530559539795 0
      vertex 13.878750801086426 11.616217613220215 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 5.323523998260498 0
      vertex 13.878750801086426 11.616217613220215 0
      vertex 7.25 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.25 5 0
      vertex 13.878750801086426 11.616217613220215 0
      vertex 14.826942443847656 10.895421028137207 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.25 5 0
      vertex 14.826942443847656 10.895421028137207 0
      vertex 7.207407474517822 4.676476001739502 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 4.676476001739502 0
      vertex 14.826942443847656 10.895421028137207 0
      vertex 15.84750747680664 10.281367301940918 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 4.676476001739502 0
      vertex 15.84750747680664 10.281367301940918 0
      vertex 16.92848014831543 9.781255722045898 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 4.676476001739502 0
      vertex 16.92848014831543 9.781255722045898 0
      vertex 7.082531929016113 4.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 4.375 0
      vertex 16.92848014831543 9.781255722045898 0
      vertex 18.057188034057617 9.40095043182373 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 4.375 0
      vertex 18.057188034057617 9.40095043182373 0
      vertex 19.22039794921875 9.14490795135498 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 4.375 0
      vertex 19.22039794921875 9.14490795135498 0
      vertex 6.883883476257324 4.116116523742676 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 4.116116523742676 0
      vertex 19.22039794921875 9.14490795135498 0
      vertex 20.40447235107422 9.016132354736328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 4.116116523742676 0
      vertex 20.40447235107422 9.016132354736328 0
      vertex 6.625 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 3.917468309402466 0
      vertex 20.40447235107422 9.016132354736328 0
      vertex 21.59552764892578 9.016132354736328 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 3.917468309402466 0
      vertex 21.59552764892578 9.016132354736328 0
      vertex 35.375 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 3.917468309402466 0
      vertex 21.59552764892578 9.016132354736328 0
      vertex 35.11611557006836 4.116116523742676 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 4.116116523742676 0
      vertex 21.59552764892578 9.016132354736328 0
      vertex 22.77960205078125 9.14490795135498 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 4.116116523742676 0
      vertex 22.77960205078125 9.14490795135498 0
      vertex 34.9174690246582 4.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 4.375 0
      vertex 22.77960205078125 9.14490795135498 0
      vertex 23.942811965942383 9.40095043182373 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 4.375 0
      vertex 23.942811965942383 9.40095043182373 0
      vertex 25.07151985168457 9.781255722045898 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 4.375 0
      vertex 25.07151985168457 9.781255722045898 0
      vertex 34.7925910949707 4.676476001739502 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 4.676476001739502 0
      vertex 25.07151985168457 9.781255722045898 0
      vertex 26.15249252319336 10.281367301940918 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 4.676476001739502 0
      vertex 26.15249252319336 10.281367301940918 0
      vertex 27.173057556152344 10.895421028137207 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 4.676476001739502 0
      vertex 27.173057556152344 10.895421028137207 0
      vertex 34.75 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.75 5 0
      vertex 27.173057556152344 10.895421028137207 0
      vertex 28.121248245239258 11.616217613220215 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.75 5 0
      vertex 28.121248245239258 11.616217613220215 0
      vertex 34.7925910949707 5.323523998260498 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 5.323523998260498 0
      vertex 28.121248245239258 11.616217613220215 0
      vertex 28.985950469970703 12.43530559539795 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 5.323523998260498 0
      vertex 28.985950469970703 12.43530559539795 0
      vertex 34.9174690246582 5.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 5.625 0
      vertex 28.985950469970703 12.43530559539795 0
      vertex 29.757022857666016 13.343083381652832 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 5.625 0
      vertex 29.757022857666016 13.343083381652832 0
      vertex 35.11611557006836 5.883883476257324 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 5.883883476257324 0
      vertex 29.757022857666016 13.343083381652832 0
      vertex 30.42542839050293 14.32890796661377 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 5.883883476257324 0
      vertex 30.42542839050293 14.32890796661377 0
      vertex 35.375 6.082531929016113 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 6.082531929016113 0
      vertex 30.42542839050293 14.32890796661377 0
      vertex 30.98332977294922 15.381219863891602 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 6.082531929016113 0
      vertex 30.98332977294922 15.381219863891602 0
      vertex 35.676475524902344 6.207407474517822 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.676475524902344 6.207407474517822 0
      vertex 30.98332977294922 15.381219863891602 0
      vertex 36 6.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36 6.25 0
      vertex 30.98332977294922 15.381219863891602 0
      vertex 31.424184799194336 16.487682342529297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36 6.25 0
      vertex 31.424184799194336 16.487682342529297 0
      vertex 36.323524475097656 6.207407474517822 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.323524475097656 6.207407474517822 0
      vertex 31.424184799194336 16.487682342529297 0
      vertex 31.742826461791992 17.635324478149414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.323524475097656 6.207407474517822 0
      vertex 31.742826461791992 17.635324478149414 0
      vertex 36.625 6.082531929016113 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.625 6.082531929016113 0
      vertex 31.742826461791992 17.635324478149414 0
      vertex 45.24738693237305 21.0364933013916 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.625 6.082531929016113 0
      vertex 45.24738693237305 21.0364933013916 0
      vertex 36.88388442993164 5.883883476257324 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.88388442993164 5.883883476257324 0
      vertex 45.24738693237305 21.0364933013916 0
      vertex 45.54206085205078 20.630905151367188 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.88388442993164 5.883883476257324 0
      vertex 45.54206085205078 20.630905151367188 0
      vertex 37.0825309753418 5.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.0825309753418 5.625 0
      vertex 45.54206085205078 20.630905151367188 0
      vertex 45.9283447265625 20.311344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.0825309753418 5.625 0
      vertex 45.9283447265625 20.311344146728516 0
      vertex 43.15995407104492 1.9719195365905762 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 45.9283447265625 20.311344146728516 0
      vertex 46.38196563720703 20.09788703918457 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 46.38196563720703 20.09788703918457 0
      vertex 46.874420166015625 20.00394630432129 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 31.742826461791992 17.635324478149414 0
      vertex 31.935518264770508 18.81068992614746 0
      vertex 45.24738693237305 21.0364933013916 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 21.0364933013916 0
      vertex 31.935518264770508 18.81068992614746 0
      vertex 45.06283187866211 21.502620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 21.502620697021484 0
      vertex 31.935518264770508 18.81068992614746 0
      vertex 32 20 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 21.502620697021484 0
      vertex 32 20 0
      vertex 45 22 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45 22 0
      vertex 32 20 0
      vertex 31.935518264770508 21.18931007385254 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45 22 0
      vertex 31.935518264770508 21.18931007385254 0
      vertex 31.742826461791992 22.364675521850586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 31.424184799194336 23.512317657470703 0
      vertex 36.323524475097656 33.7925910949707 0
      vertex 31.742826461791992 22.364675521850586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 31.742826461791992 22.364675521850586 0
      vertex 36.323524475097656 33.7925910949707 0
      vertex 45.06283187866211 22.497379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 31.742826461791992 22.364675521850586 0
      vertex 45.06283187866211 22.497379302978516 0
      vertex 45 22 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.323524475097656 33.7925910949707 0
      vertex 31.424184799194336 23.512317657470703 0
      vertex 36 33.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36 33.75 0
      vertex 31.424184799194336 23.512317657470703 0
      vertex 30.98332977294922 24.6187801361084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36 33.75 0
      vertex 30.98332977294922 24.6187801361084 0
      vertex 35.676475524902344 33.7925910949707 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.676475524902344 33.7925910949707 0
      vertex 30.98332977294922 24.6187801361084 0
      vertex 35.375 33.9174690246582 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 33.9174690246582 0
      vertex 30.98332977294922 24.6187801361084 0
      vertex 30.42542839050293 25.671092987060547 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 33.9174690246582 0
      vertex 30.42542839050293 25.671092987060547 0
      vertex 35.11611557006836 34.11611557006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 34.11611557006836 0
      vertex 30.42542839050293 25.671092987060547 0
      vertex 29.757022857666016 26.65691566467285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 34.11611557006836 0
      vertex 29.757022857666016 26.65691566467285 0
      vertex 34.9174690246582 34.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 34.375 0
      vertex 29.757022857666016 26.65691566467285 0
      vertex 28.985950469970703 27.564693450927734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.9174690246582 34.375 0
      vertex 28.985950469970703 27.564693450927734 0
      vertex 34.7925910949707 34.676475524902344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 34.676475524902344 0
      vertex 28.985950469970703 27.564693450927734 0
      vertex 28.121248245239258 28.3837833404541 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 34.676475524902344 0
      vertex 28.121248245239258 28.3837833404541 0
      vertex 34.75 35 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.75 35 0
      vertex 28.121248245239258 28.3837833404541 0
      vertex 27.173057556152344 29.10457992553711 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.75 35 0
      vertex 27.173057556152344 29.10457992553711 0
      vertex 34.7925910949707 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 35.323524475097656 0
      vertex 27.173057556152344 29.10457992553711 0
      vertex 26.15249252319336 29.718631744384766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 35.323524475097656 0
      vertex 26.15249252319336 29.718631744384766 0
      vertex 25.07151985168457 30.2187442779541 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.7925910949707 35.323524475097656 0
      vertex 25.07151985168457 30.2187442779541 0
      vertex 25.07151985168457 49.78125762939453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 25.07151985168457 49.78125762939453 0
      vertex 25.07151985168457 30.2187442779541 0
      vertex 23.942811965942383 30.599050521850586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 25.07151985168457 49.78125762939453 0
      vertex 23.942811965942383 30.599050521850586 0
      vertex 23.942811965942383 49.40095138549805 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 23.942811965942383 49.40095138549805 0
      vertex 23.942811965942383 30.599050521850586 0
      vertex 22.77960205078125 30.855091094970703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 23.942811965942383 49.40095138549805 0
      vertex 22.77960205078125 30.855091094970703 0
      vertex 22.77960205078125 49.1449089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.77960205078125 49.1449089050293 0
      vertex 22.77960205078125 30.855091094970703 0
      vertex 21.59552764892578 30.983867645263672 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.77960205078125 49.1449089050293 0
      vertex 21.59552764892578 30.983867645263672 0
      vertex 21.59552764892578 49.01613235473633 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.59552764892578 49.01613235473633 0
      vertex 21.59552764892578 30.983867645263672 0
      vertex 20.40447235107422 30.983867645263672 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.59552764892578 49.01613235473633 0
      vertex 20.40447235107422 30.983867645263672 0
      vertex 20.40447235107422 49.01613235473633 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.40447235107422 49.01613235473633 0
      vertex 20.40447235107422 30.983867645263672 0
      vertex 19.22039794921875 49.1449089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.22039794921875 49.1449089050293 0
      vertex 20.40447235107422 30.983867645263672 0
      vertex 19.22039794921875 30.855091094970703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.22039794921875 49.1449089050293 0
      vertex 19.22039794921875 30.855091094970703 0
      vertex 18.057188034057617 49.40095138549805 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 18.057188034057617 49.40095138549805 0
      vertex 19.22039794921875 30.855091094970703 0
      vertex 18.057188034057617 30.599050521850586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 18.057188034057617 49.40095138549805 0
      vertex 18.057188034057617 30.599050521850586 0
      vertex 16.92848014831543 49.78125762939453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 16.92848014831543 49.78125762939453 0
      vertex 18.057188034057617 30.599050521850586 0
      vertex 16.92848014831543 30.2187442779541 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 16.92848014831543 49.78125762939453 0
      vertex 16.92848014831543 30.2187442779541 0
      vertex 7.207407474517822 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 35.323524475097656 0
      vertex 16.92848014831543 30.2187442779541 0
      vertex 15.84750747680664 29.718631744384766 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 35.323524475097656 0
      vertex 15.84750747680664 29.718631744384766 0
      vertex 14.826942443847656 29.10457992553711 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 35.323524475097656 0
      vertex 14.826942443847656 29.10457992553711 0
      vertex 7.25 35 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.25 35 0
      vertex 14.826942443847656 29.10457992553711 0
      vertex 13.878750801086426 28.3837833404541 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.25 35 0
      vertex 13.878750801086426 28.3837833404541 0
      vertex 7.207407474517822 34.676475524902344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 34.676475524902344 0
      vertex 13.878750801086426 28.3837833404541 0
      vertex 13.014049530029297 27.564693450927734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 34.676475524902344 0
      vertex 13.014049530029297 27.564693450927734 0
      vertex 7.082531929016113 34.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 34.375 0
      vertex 13.014049530029297 27.564693450927734 0
      vertex 12.242976188659668 26.65691566467285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 34.375 0
      vertex 12.242976188659668 26.65691566467285 0
      vertex 6.883883476257324 34.11611557006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 34.11611557006836 0
      vertex 12.242976188659668 26.65691566467285 0
      vertex 11.574570655822754 25.671092987060547 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 34.11611557006836 0
      vertex 11.574570655822754 25.671092987060547 0
      vertex 6.625 33.9174690246582 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 33.9174690246582 0
      vertex 11.574570655822754 25.671092987060547 0
      vertex 11.016670227050781 24.6187801361084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.625 33.9174690246582 0
      vertex 11.016670227050781 24.6187801361084 0
      vertex 6.323523998260498 33.7925910949707 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.323523998260498 33.7925910949707 0
      vertex 11.016670227050781 24.6187801361084 0
      vertex 6 33.75 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6 33.75 0
      vertex 11.016670227050781 24.6187801361084 0
      vertex 10.575815200805664 23.512317657470703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6 33.75 0
      vertex 10.575815200805664 23.512317657470703 0
      vertex 5.676476001739502 33.7925910949707 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 33.7925910949707 0
      vertex 10.575815200805664 23.512317657470703 0
      vertex 10.257173538208008 22.364675521850586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 33.7925910949707 0
      vertex 10.257173538208008 22.364675521850586 0
      vertex -3.015770673751831 22.25066566467285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.015770673751831 22.25066566467285 0
      vertex 10.257173538208008 22.364675521850586 0
      vertex 10.064482688903809 21.18931007385254 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.015770673751831 22.25066566467285 0
      vertex 10.064482688903809 21.18931007385254 0
      vertex -3.015770673751831 21.74933433532715 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 4.676476001739502 0
      vertex 0.9298890233039856 0.2375379502773285 0
      vertex 4.75 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 5 0
      vertex 0.9298890233039856 0.2375379502773285 0
      vertex 0.3018741011619568 0.5278016924858093 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 5 0
      vertex 0.3018741011619568 0.5278016924858093 0
      vertex -0.2667303681373596 0.9219396710395813 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 4.375 0
      vertex 2.2877840995788574 0 0
      vertex 4.792592525482178 4.676476001739502 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 4.676476001739502 0
      vertex 2.2877840995788574 0 0
      vertex 1.5985267162322998 0.059831973165273666 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 4.676476001739502 0
      vertex 1.5985267162322998 0.059831973165273666 0
      vertex 0.9298890233039856 0.2375379502773285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 4.375 0
      vertex 5.116116523742676 4.116116523742676 0
      vertex 2.2877840995788574 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 0 0
      vertex 5.116116523742676 4.116116523742676 0
      vertex 5.375 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 0 0
      vertex 5.375 3.917468309402466 0
      vertex 5.676476001739502 3.792592763900757 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 3.792592763900757 0
      vertex 6 3.75 0
      vertex 2.2877840995788574 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 0 0
      vertex 6 3.75 0
      vertex 6.323523998260498 3.792592763900757 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 0 0
      vertex 6.323523998260498 3.792592763900757 0
      vertex 6.625 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.1404471397399902 21.263750076293945 0
      vertex 5.375 6.082531929016113 0
      vertex -3.3819661140441895 20.82442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.3819661140441895 20.82442855834961 0
      vertex 5.375 6.082531929016113 0
      vertex 5.116116523742676 5.883883476257324 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.3819661140441895 20.82442855834961 0
      vertex 5.116116523742676 5.883883476257324 0
      vertex -3.725152015686035 20.458972930908203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.725152015686035 20.458972930908203 0
      vertex 5.116116523742676 5.883883476257324 0
      vertex 4.917468070983887 5.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.725152015686035 20.458972930908203 0
      vertex 4.917468070983887 5.625 0
      vertex -1.1599526405334473 1.9719195365905762 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex 4.917468070983887 5.625 0
      vertex 4.792592525482178 5.323523998260498 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex 4.792592525482178 5.323523998260498 0
      vertex 4.75 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.937166213989258 22.497379302978516 0
      vertex -7 22 0
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 18.0892333984375 0
      vertex -7 22 0
      vertex -6.937166213989258 21.502620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 18.0892333984375 0
      vertex -6.937166213989258 21.502620697021484 0
      vertex -6.752613544464111 21.0364933013916 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.752613544464111 21.0364933013916 0
      vertex -6.457937240600586 20.630905151367188 0
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 18.0892333984375 0
      vertex -6.457937240600586 20.630905151367188 0
      vertex -9.937335014343262 17.383974075317383 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.937335014343262 17.383974075317383 0
      vertex -6.457937240600586 20.630905151367188 0
      vertex -9.751304626464844 16.7008113861084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.751304626464844 16.7008113861084 0
      vertex -6.457937240600586 20.630905151367188 0
      vertex -9.447736740112305 16.061153411865234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -6.457937240600586 20.630905151367188 0
      vertex -6.071653366088867 20.311344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -6.071653366088867 20.311344146728516 0
      vertex -5.6180338859558105 20.09788703918457 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.6180338859558105 20.09788703918457 0
      vertex -5.12558126449585 20.00394630432129 0
      vertex -9.447736740112305 16.061153411865234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -5.12558126449585 20.00394630432129 0
      vertex -4.625237464904785 20.035425186157227 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 16.061153411865234 0
      vertex -4.625237464904785 20.035425186157227 0
      vertex -1.1599526405334473 1.9719195365905762 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex -4.625237464904785 20.035425186157227 0
      vertex -4.148441314697266 20.190345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex -4.148441314697266 20.190345764160156 0
      vertex -3.725152015686035 20.458972930908203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 33.7925910949707 0
      vertex -3.015770673751831 22.25066566467285 0
      vertex 5.375 33.9174690246582 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.375 33.9174690246582 0
      vertex -3.015770673751831 22.25066566467285 0
      vertex -3.1404471397399902 22.736249923706055 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.375 33.9174690246582 0
      vertex -3.1404471397399902 22.736249923706055 0
      vertex 5.116116523742676 34.11611557006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.116116523742676 34.11611557006836 0
      vertex -3.1404471397399902 22.736249923706055 0
      vertex -3.3819661140441895 23.17557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.116116523742676 34.11611557006836 0
      vertex -3.3819661140441895 23.17557144165039 0
      vertex 4.917468070983887 34.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 34.375 0
      vertex -3.3819661140441895 23.17557144165039 0
      vertex -3.725152015686035 23.541027069091797 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 34.375 0
      vertex -3.725152015686035 23.541027069091797 0
      vertex 4.792592525482178 34.676475524902344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 34.676475524902344 0
      vertex -3.725152015686035 23.541027069091797 0
      vertex -4.148441314697266 23.809654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 34.676475524902344 0
      vertex -4.148441314697266 23.809654235839844 0
      vertex 4.75 35 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 35 0
      vertex -4.148441314697266 23.809654235839844 0
      vertex -4.625237464904785 23.964574813842773 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 35 0
      vertex -4.625237464904785 23.964574813842773 0
      vertex -5.12558126449585 23.99605369567871 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 35 0
      vertex -5.12558126449585 23.99605369567871 0
      vertex 4.792592525482178 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 35.323524475097656 0
      vertex -5.12558126449585 23.99605369567871 0
      vertex -5.6180338859558105 23.90211296081543 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 35.323524475097656 0
      vertex -5.6180338859558105 23.90211296081543 0
      vertex -5.6180338859558105 60.09788513183594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.6180338859558105 60.09788513183594 0
      vertex -5.6180338859558105 23.90211296081543 0
      vertex -6.071653366088867 23.688655853271484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.6180338859558105 60.09788513183594 0
      vertex -6.071653366088867 23.688655853271484 0
      vertex -6.071653366088867 60.311344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.071653366088867 60.311344146728516 0
      vertex -6.071653366088867 23.688655853271484 0
      vertex -6.457937240600586 23.369094848632812 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.071653366088867 60.311344146728516 0
      vertex -6.457937240600586 23.369094848632812 0
      vertex -6.457937240600586 60.63090515136719 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.457937240600586 60.63090515136719 0
      vertex -6.457937240600586 23.369094848632812 0
      vertex -6.752613544464111 22.9635066986084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.457937240600586 60.63090515136719 0
      vertex -6.752613544464111 22.9635066986084 0
      vertex -6.752613544464111 61.03649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.752613544464111 61.03649139404297 0
      vertex -6.752613544464111 22.9635066986084 0
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.752613544464111 61.03649139404297 0
      vertex -10 18.0892333984375 0
      vertex -10 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.752613544464111 22.9635066986084 0
      vertex -6.937166213989258 22.497379302978516 0
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.323524475097656 33.7925910949707 0
      vertex 36.625 33.9174690246582 0
      vertex 45.06283187866211 22.497379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 22.497379302978516 0
      vertex 36.625 33.9174690246582 0
      vertex 45.24738693237305 22.9635066986084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 22.9635066986084 0
      vertex 36.625 33.9174690246582 0
      vertex 36.88388442993164 34.11611557006836 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 22.9635066986084 0
      vertex 36.88388442993164 34.11611557006836 0
      vertex 37.0825309753418 34.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 22.9635066986084 0
      vertex 37.0825309753418 34.375 0
      vertex 45.54206085205078 23.369094848632812 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.54206085205078 23.369094848632812 0
      vertex 37.0825309753418 34.375 0
      vertex 37.2074089050293 34.676475524902344 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.54206085205078 23.369094848632812 0
      vertex 37.2074089050293 34.676475524902344 0
      vertex 45.9283447265625 23.688655853271484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.9283447265625 23.688655853271484 0
      vertex 37.2074089050293 34.676475524902344 0
      vertex 46.38196563720703 23.90211296081543 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.38196563720703 23.90211296081543 0
      vertex 37.2074089050293 34.676475524902344 0
      vertex 37.25 35 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.38196563720703 23.90211296081543 0
      vertex 37.25 35 0
      vertex 46.874420166015625 23.99605369567871 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.874420166015625 23.99605369567871 0
      vertex 37.25 35 0
      vertex 37.2074089050293 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.874420166015625 23.99605369567871 0
      vertex 37.2074089050293 35.323524475097656 0
      vertex 47.37476348876953 23.964574813842773 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.37476348876953 23.964574813842773 0
      vertex 37.2074089050293 35.323524475097656 0
      vertex 47.37476348876953 60.03542709350586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.37476348876953 23.964574813842773 0
      vertex 47.37476348876953 60.03542709350586 0
      vertex 47.851558685302734 23.809654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.851558685302734 23.809654235839844 0
      vertex 47.37476348876953 60.03542709350586 0
      vertex 47.851558685302734 60.190345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.851558685302734 23.809654235839844 0
      vertex 47.851558685302734 60.190345764160156 0
      vertex 48.27484893798828 23.541027069091797 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.27484893798828 23.541027069091797 0
      vertex 47.851558685302734 60.190345764160156 0
      vertex 48.27484893798828 60.4589729309082 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.27484893798828 23.541027069091797 0
      vertex 48.27484893798828 60.4589729309082 0
      vertex 48.61803436279297 23.17557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.61803436279297 23.17557144165039 0
      vertex 48.27484893798828 60.4589729309082 0
      vertex 48.61803436279297 60.82442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.61803436279297 23.17557144165039 0
      vertex 48.61803436279297 60.82442855834961 0
      vertex 48.859554290771484 61.26375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.37476348876953 60.03542709350586 0
      vertex 37.2074089050293 35.323524475097656 0
      vertex 37.58198547363281 50.76375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.58198547363281 50.76375198364258 0
      vertex 37.2074089050293 35.323524475097656 0
      vertex 37.0825309753418 35.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.58198547363281 50.76375198364258 0
      vertex 37.0825309753418 35.625 0
      vertex 37.3404655456543 50.32442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.3404655456543 50.32442855834961 0
      vertex 37.0825309753418 35.625 0
      vertex 36.88388442993164 35.88388442993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.3404655456543 50.32442855834961 0
      vertex 36.88388442993164 35.88388442993164 0
      vertex 36.99728012084961 49.9589729309082 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.99728012084961 49.9589729309082 0
      vertex 36.88388442993164 35.88388442993164 0
      vertex 36.625 36.0825309753418 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.99728012084961 49.9589729309082 0
      vertex 36.625 36.0825309753418 0
      vertex 36.57398986816406 49.690345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.57398986816406 49.690345764160156 0
      vertex 36.625 36.0825309753418 0
      vertex 36.323524475097656 36.2074089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.57398986816406 49.690345764160156 0
      vertex 36.323524475097656 36.2074089050293 0
      vertex 36.09719467163086 49.53542709350586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.09719467163086 49.53542709350586 0
      vertex 36.323524475097656 36.2074089050293 0
      vertex 36 36.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.09719467163086 49.53542709350586 0
      vertex 36 36.25 0
      vertex 35.59685134887695 49.50394821166992 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.59685134887695 49.50394821166992 0
      vertex 36 36.25 0
      vertex 35.676475524902344 36.2074089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.59685134887695 49.50394821166992 0
      vertex 35.676475524902344 36.2074089050293 0
      vertex 35.10439682006836 49.59788513183594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.10439682006836 49.59788513183594 0
      vertex 35.676475524902344 36.2074089050293 0
      vertex 35.375 36.0825309753418 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.10439682006836 49.59788513183594 0
      vertex 35.375 36.0825309753418 0
      vertex 34.650779724121094 49.811344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.650779724121094 49.811344146728516 0
      vertex 35.375 36.0825309753418 0
      vertex 35.11611557006836 35.88388442993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.650779724121094 49.811344146728516 0
      vertex 35.11611557006836 35.88388442993164 0
      vertex 34.264495849609375 50.13090515136719 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.264495849609375 50.13090515136719 0
      vertex 35.11611557006836 35.88388442993164 0
      vertex 27.173057556152344 50.89542007446289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.264495849609375 50.13090515136719 0
      vertex 27.173057556152344 50.89542007446289 0
      vertex 28.121248245239258 51.61621856689453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.11611557006836 35.88388442993164 0
      vertex 34.9174690246582 35.625 0
      vertex 27.173057556152344 50.89542007446289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 27.173057556152344 50.89542007446289 0
      vertex 34.9174690246582 35.625 0
      vertex 26.15249252319336 50.281368255615234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 26.15249252319336 50.281368255615234 0
      vertex 34.9174690246582 35.625 0
      vertex 34.7925910949707 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 26.15249252319336 50.281368255615234 0
      vertex 34.7925910949707 35.323524475097656 0
      vertex 25.07151985168457 49.78125762939453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.676475524902344 3.792592763900757 0
      vertex 39.712215423583984 0 0
      vertex 35.375 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 3.917468309402466 0
      vertex 39.712215423583984 0 0
      vertex 2.2877840995788574 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.375 3.917468309402466 0
      vertex 2.2877840995788574 0 0
      vertex 6.625 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.676475524902344 3.792592763900757 0
      vertex 36 3.75 0
      vertex 39.712215423583984 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 0 0
      vertex 36 3.75 0
      vertex 36.323524475097656 3.792592763900757 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 0 0
      vertex 36.323524475097656 3.792592763900757 0
      vertex 36.625 3.917468309402466 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.625 3.917468309402466 0
      vertex 36.88388442993164 4.116116523742676 0
      vertex 39.712215423583984 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 0 0
      vertex 36.88388442993164 4.116116523742676 0
      vertex 37.0825309753418 4.375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 0 0
      vertex 37.0825309753418 4.375 0
      vertex 37.2074089050293 4.676476001739502 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.25 5 0
      vertex 41.07011032104492 0.2375379502773285 0
      vertex 37.2074089050293 4.676476001739502 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.2074089050293 4.676476001739502 0
      vertex 41.07011032104492 0.2375379502773285 0
      vertex 40.40147399902344 0.059831973165273666 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.2074089050293 4.676476001739502 0
      vertex 40.40147399902344 0.059831973165273666 0
      vertex 39.712215423583984 0 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.2074089050293 5.323523998260498 0
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 37.25 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.25 5 0
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 42.758914947509766 1.408160924911499 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.25 5 0
      vertex 42.758914947509766 1.408160924911499 0
      vertex 42.26673126220703 0.9219396710395813 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.2074089050293 5.323523998260498 0
      vertex 37.0825309753418 5.625 0
      vertex 43.15995407104492 1.9719195365905762 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -6.937166213989258 62.497379302978516 0
      vertex -7 62 0
      vertex -10 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 65.9107666015625 0
      vertex -7 62 0
      vertex -6.937166213989258 61.502620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 65.9107666015625 0
      vertex -6.937166213989258 61.502620697021484 0
      vertex -6.752613544464111 61.03649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.6180338859558105 60.09788513183594 0
      vertex -5.12558126449585 60.00394821166992 0
      vertex 4.792592525482178 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 35.323524475097656 0
      vertex -5.12558126449585 60.00394821166992 0
      vertex 4.340401649475098 51.002620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 35.323524475097656 0
      vertex 4.340401649475098 51.002620697021484 0
      vertex 4.524954795837402 50.53649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.12558126449585 60.00394821166992 0
      vertex -4.625237464904785 60.03542709350586 0
      vertex 4.340401649475098 51.002620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.340401649475098 51.002620697021484 0
      vertex -4.625237464904785 60.03542709350586 0
      vertex 4.277568340301514 51.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.277568340301514 51.5 0
      vertex -4.625237464904785 60.03542709350586 0
      vertex -4.148441314697266 60.190345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.277568340301514 51.5 0
      vertex -4.148441314697266 60.190345764160156 0
      vertex 4.340401649475098 51.997379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.340401649475098 51.997379302978516 0
      vertex -4.148441314697266 60.190345764160156 0
      vertex -3.725152015686035 60.4589729309082 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.340401649475098 51.997379302978516 0
      vertex -3.725152015686035 60.4589729309082 0
      vertex -3.3819661140441895 60.82442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.340401649475098 51.997379302978516 0
      vertex -3.3819661140441895 60.82442855834961 0
      vertex 4.524954795837402 52.46350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.524954795837402 52.46350860595703 0
      vertex -3.3819661140441895 60.82442855834961 0
      vertex -3.1404471397399902 61.26375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.524954795837402 52.46350860595703 0
      vertex -3.1404471397399902 61.26375198364258 0
      vertex 4.819631099700928 52.86909484863281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.819631099700928 52.86909484863281 0
      vertex -3.1404471397399902 61.26375198364258 0
      vertex -3.015770673751831 61.749332427978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.819631099700928 52.86909484863281 0
      vertex -3.015770673751831 61.749332427978516 0
      vertex 5.205914497375488 53.188655853271484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.205914497375488 53.188655853271484 0
      vertex -3.015770673751831 61.749332427978516 0
      vertex 5.659533977508545 53.40211486816406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.659533977508545 53.40211486816406 0
      vertex -3.015770673751831 61.749332427978516 0
      vertex 10.064482688903809 61.189308166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.659533977508545 53.40211486816406 0
      vertex 10.064482688903809 61.189308166503906 0
      vertex 10 60 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -3.015770673751831 61.749332427978516 0
      vertex -3.015770673751831 62.250667572021484 0
      vertex 10.064482688903809 61.189308166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 10.064482688903809 61.189308166503906 0
      vertex -3.015770673751831 62.250667572021484 0
      vertex 10.257173538208008 62.36467361450195 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 10.257173538208008 62.36467361450195 0
      vertex -3.015770673751831 62.250667572021484 0
      vertex -3.1404471397399902 62.73624801635742 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 10.257173538208008 62.36467361450195 0
      vertex -3.1404471397399902 62.73624801635742 0
      vertex 10.575815200805664 63.5123176574707 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 10.575815200805664 63.5123176574707 0
      vertex -3.1404471397399902 62.73624801635742 0
      vertex 11.016670227050781 64.61878204345703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 11.016670227050781 64.61878204345703 0
      vertex -3.1404471397399902 62.73624801635742 0
      vertex -3.3819661140441895 63.17557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 11.016670227050781 64.61878204345703 0
      vertex -3.3819661140441895 63.17557144165039 0
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex -3.3819661140441895 63.17557144165039 0
      vertex -3.725152015686035 63.5410270690918 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex -3.725152015686035 63.5410270690918 0
      vertex -4.148441314697266 63.809654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -4.148441314697266 63.809654235839844 0
      vertex -4.625237464904785 63.96457290649414 0
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex -4.625237464904785 63.96457290649414 0
      vertex -9.447736740112305 67.93885040283203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -4.625237464904785 63.96457290649414 0
      vertex -5.12558126449585 63.99605178833008 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -5.12558126449585 63.99605178833008 0
      vertex -5.6180338859558105 63.90211486816406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -5.6180338859558105 63.90211486816406 0
      vertex -6.071653366088867 63.688655853271484 0
      vertex -9.447736740112305 67.93885040283203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -6.071653366088867 63.688655853271484 0
      vertex -6.457937240600586 63.36909484863281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -6.457937240600586 63.36909484863281 0
      vertex -9.751304626464844 67.29918670654297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.751304626464844 67.29918670654297 0
      vertex -6.457937240600586 63.36909484863281 0
      vertex -9.937335014343262 66.61602783203125 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -9.937335014343262 66.61602783203125 0
      vertex -6.457937240600586 63.36909484863281 0
      vertex -10 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 65.9107666015625 0
      vertex -6.457937240600586 63.36909484863281 0
      vertex -6.752613544464111 62.96350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -10 65.9107666015625 0
      vertex -6.752613544464111 62.96350860595703 0
      vertex -6.937166213989258 62.497379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.659533977508545 53.40211486816406 0
      vertex 10 60 0
      vertex 6.151987075805664 53.49605178833008 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.151987075805664 53.49605178833008 0
      vertex 10 60 0
      vertex 10.064482688903809 58.810691833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.151987075805664 53.49605178833008 0
      vertex 10.064482688903809 58.810691833496094 0
      vertex 6.6523308753967285 53.46457290649414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.6523308753967285 53.46457290649414 0
      vertex 10.064482688903809 58.810691833496094 0
      vertex 10.257173538208008 57.63532638549805 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.6523308753967285 53.46457290649414 0
      vertex 10.257173538208008 57.63532638549805 0
      vertex 7.12912654876709 53.309654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.12912654876709 53.309654235839844 0
      vertex 10.257173538208008 57.63532638549805 0
      vertex 7.5524163246154785 53.0410270690918 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.5524163246154785 53.0410270690918 0
      vertex 10.257173538208008 57.63532638549805 0
      vertex 10.575815200805664 56.4876823425293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.5524163246154785 53.0410270690918 0
      vertex 10.575815200805664 56.4876823425293 0
      vertex 7.895602226257324 52.67557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.895602226257324 52.67557144165039 0
      vertex 10.575815200805664 56.4876823425293 0
      vertex 11.016670227050781 55.381221771240234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.895602226257324 52.67557144165039 0
      vertex 11.016670227050781 55.381221771240234 0
      vertex 8.137121200561523 52.23624801635742 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.137121200561523 52.23624801635742 0
      vertex 11.016670227050781 55.381221771240234 0
      vertex 11.574570655822754 54.32890701293945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.137121200561523 52.23624801635742 0
      vertex 11.574570655822754 54.32890701293945 0
      vertex 8.261797904968262 51.750667572021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.261797904968262 51.750667572021484 0
      vertex 11.574570655822754 54.32890701293945 0
      vertex 12.242976188659668 53.343082427978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.261797904968262 51.750667572021484 0
      vertex 12.242976188659668 53.343082427978516 0
      vertex 8.261797904968262 51.249332427978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.261797904968262 51.249332427978516 0
      vertex 12.242976188659668 53.343082427978516 0
      vertex 13.014049530029297 52.435306549072266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.261797904968262 51.249332427978516 0
      vertex 13.014049530029297 52.435306549072266 0
      vertex 8.137121200561523 50.76375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.137121200561523 50.76375198364258 0
      vertex 13.014049530029297 52.435306549072266 0
      vertex 13.878750801086426 51.61621856689453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 8.137121200561523 50.76375198364258 0
      vertex 13.878750801086426 51.61621856689453 0
      vertex 7.895602226257324 50.32442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.895602226257324 50.32442855834961 0
      vertex 13.878750801086426 51.61621856689453 0
      vertex 14.826942443847656 50.89542007446289 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.895602226257324 50.32442855834961 0
      vertex 14.826942443847656 50.89542007446289 0
      vertex 7.5524163246154785 49.9589729309082 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.5524163246154785 49.9589729309082 0
      vertex 14.826942443847656 50.89542007446289 0
      vertex 6.883883476257324 35.88388442993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.5524163246154785 49.9589729309082 0
      vertex 6.883883476257324 35.88388442993164 0
      vertex 7.12912654876709 49.690345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.12912654876709 49.690345764160156 0
      vertex 6.883883476257324 35.88388442993164 0
      vertex 6.625 36.0825309753418 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.12912654876709 49.690345764160156 0
      vertex 6.625 36.0825309753418 0
      vertex 6.6523308753967285 49.53542709350586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.6523308753967285 49.53542709350586 0
      vertex 6.625 36.0825309753418 0
      vertex 6.323523998260498 36.2074089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.6523308753967285 49.53542709350586 0
      vertex 6.323523998260498 36.2074089050293 0
      vertex 6 36.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6.883883476257324 35.88388442993164 0
      vertex 14.826942443847656 50.89542007446289 0
      vertex 7.082531929016113 35.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 35.625 0
      vertex 14.826942443847656 50.89542007446289 0
      vertex 15.84750747680664 50.281368255615234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.082531929016113 35.625 0
      vertex 15.84750747680664 50.281368255615234 0
      vertex 7.207407474517822 35.323524475097656 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 7.207407474517822 35.323524475097656 0
      vertex 15.84750747680664 50.281368255615234 0
      vertex 16.92848014831543 49.78125762939453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.264495849609375 50.13090515136719 0
      vertex 28.121248245239258 51.61621856689453 0
      vertex 33.969818115234375 50.53649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.969818115234375 50.53649139404297 0
      vertex 28.121248245239258 51.61621856689453 0
      vertex 28.985950469970703 52.435306549072266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.969818115234375 50.53649139404297 0
      vertex 28.985950469970703 52.435306549072266 0
      vertex 33.7852668762207 51.002620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.7852668762207 51.002620697021484 0
      vertex 28.985950469970703 52.435306549072266 0
      vertex 29.757022857666016 53.343082427978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.7852668762207 51.002620697021484 0
      vertex 29.757022857666016 53.343082427978516 0
      vertex 33.72243118286133 51.5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.72243118286133 51.5 0
      vertex 29.757022857666016 53.343082427978516 0
      vertex 30.42542839050293 54.32890701293945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.72243118286133 51.5 0
      vertex 30.42542839050293 54.32890701293945 0
      vertex 33.7852668762207 51.997379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.7852668762207 51.997379302978516 0
      vertex 30.42542839050293 54.32890701293945 0
      vertex 30.98332977294922 55.381221771240234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.7852668762207 51.997379302978516 0
      vertex 30.98332977294922 55.381221771240234 0
      vertex 33.969818115234375 52.46350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 33.969818115234375 52.46350860595703 0
      vertex 30.98332977294922 55.381221771240234 0
      vertex 34.264495849609375 52.86909484863281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.264495849609375 52.86909484863281 0
      vertex 30.98332977294922 55.381221771240234 0
      vertex 31.424184799194336 56.4876823425293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.264495849609375 52.86909484863281 0
      vertex 31.424184799194336 56.4876823425293 0
      vertex 34.650779724121094 53.188655853271484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.650779724121094 53.188655853271484 0
      vertex 31.424184799194336 56.4876823425293 0
      vertex 31.742826461791992 57.63532638549805 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 34.650779724121094 53.188655853271484 0
      vertex 31.742826461791992 57.63532638549805 0
      vertex 35.10439682006836 53.40211486816406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.10439682006836 53.40211486816406 0
      vertex 31.742826461791992 57.63532638549805 0
      vertex 31.935518264770508 58.810691833496094 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.10439682006836 53.40211486816406 0
      vertex 31.935518264770508 58.810691833496094 0
      vertex 35.59685134887695 53.49605178833008 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.59685134887695 53.49605178833008 0
      vertex 31.935518264770508 58.810691833496094 0
      vertex 32 60 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 35.59685134887695 53.49605178833008 0
      vertex 32 60 0
      vertex 36.09719467163086 53.46457290649414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.09719467163086 53.46457290649414 0
      vertex 32 60 0
      vertex 36.57398986816406 53.309654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.57398986816406 53.309654235839844 0
      vertex 32 60 0
      vertex 31.935518264770508 61.189308166503906 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 36.57398986816406 53.309654235839844 0
      vertex 31.935518264770508 61.189308166503906 0
      vertex 45 62 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45 62 0
      vertex 31.935518264770508 61.189308166503906 0
      vertex 31.742826461791992 62.36467361450195 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45 62 0
      vertex 31.742826461791992 62.36467361450195 0
      vertex 45.06283187866211 62.497379302978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 62.497379302978516 0
      vertex 31.742826461791992 62.36467361450195 0
      vertex 31.424184799194336 63.5123176574707 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 62.497379302978516 0
      vertex 31.424184799194336 63.5123176574707 0
      vertex 45.24738693237305 62.96350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 62.96350860595703 0
      vertex 31.424184799194336 63.5123176574707 0
      vertex 30.98332977294922 64.61878204345703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 62.96350860595703 0
      vertex 30.98332977294922 64.61878204345703 0
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 30.98332977294922 64.61878204345703 0
      vertex 39.712215423583984 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 39.712215423583984 84 0
      vertex 40.40147399902344 83.94017028808594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 30.98332977294922 64.61878204345703 0
      vertex 30.42542839050293 65.67108917236328 0
      vertex 39.712215423583984 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 84 0
      vertex 30.42542839050293 65.67108917236328 0
      vertex 29.757022857666016 66.65691375732422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 84 0
      vertex 29.757022857666016 66.65691375732422 0
      vertex 28.985950469970703 67.564697265625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 28.985950469970703 67.564697265625 0
      vertex 28.121248245239258 68.38378143310547 0
      vertex 39.712215423583984 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 84 0
      vertex 28.121248245239258 68.38378143310547 0
      vertex 27.173057556152344 69.10457611083984 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 39.712215423583984 84 0
      vertex 27.173057556152344 69.10457611083984 0
      vertex 22.984230041503906 77.25066375732422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.984230041503906 77.25066375732422 0
      vertex 27.173057556152344 69.10457611083984 0
      vertex 26.15249252319336 69.71863555908203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.984230041503906 77.25066375732422 0
      vertex 26.15249252319336 69.71863555908203 0
      vertex 22.984230041503906 76.74933624267578 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.984230041503906 76.74933624267578 0
      vertex 26.15249252319336 69.71863555908203 0
      vertex 25.07151985168457 70.21874237060547 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.984230041503906 76.74933624267578 0
      vertex 25.07151985168457 70.21874237060547 0
      vertex 22.85955238342285 76.26374816894531 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.85955238342285 76.26374816894531 0
      vertex 25.07151985168457 70.21874237060547 0
      vertex 23.942811965942383 70.59905242919922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.85955238342285 76.26374816894531 0
      vertex 23.942811965942383 70.59905242919922 0
      vertex 22.61803436279297 75.82443237304688 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.61803436279297 75.82443237304688 0
      vertex 23.942811965942383 70.59905242919922 0
      vertex 22.27484703063965 75.45897674560547 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.27484703063965 75.45897674560547 0
      vertex 23.942811965942383 70.59905242919922 0
      vertex 22.77960205078125 70.85509490966797 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.27484703063965 75.45897674560547 0
      vertex 22.77960205078125 70.85509490966797 0
      vertex 21.851558685302734 75.19034576416016 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.851558685302734 75.19034576416016 0
      vertex 22.77960205078125 70.85509490966797 0
      vertex 21.59552764892578 70.9838638305664 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.851558685302734 75.19034576416016 0
      vertex 21.59552764892578 70.9838638305664 0
      vertex 21.37476348876953 75.0354232788086 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.37476348876953 75.0354232788086 0
      vertex 21.59552764892578 70.9838638305664 0
      vertex 20.874418258666992 75.00394439697266 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.874418258666992 75.00394439697266 0
      vertex 21.59552764892578 70.9838638305664 0
      vertex 20.40447235107422 70.9838638305664 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.874418258666992 75.00394439697266 0
      vertex 20.40447235107422 70.9838638305664 0
      vertex 20.38196563720703 75.09788513183594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.38196563720703 75.09788513183594 0
      vertex 20.40447235107422 70.9838638305664 0
      vertex 19.22039794921875 70.85509490966797 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.38196563720703 75.09788513183594 0
      vertex 19.22039794921875 70.85509490966797 0
      vertex 19.928346633911133 75.31134796142578 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.928346633911133 75.31134796142578 0
      vertex 19.22039794921875 70.85509490966797 0
      vertex 19.542062759399414 75.63090515136719 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.542062759399414 75.63090515136719 0
      vertex 19.22039794921875 70.85509490966797 0
      vertex 18.057188034057617 70.59905242919922 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.542062759399414 75.63090515136719 0
      vertex 18.057188034057617 70.59905242919922 0
      vertex 19.247386932373047 76.03649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.247386932373047 76.03649139404297 0
      vertex 18.057188034057617 70.59905242919922 0
      vertex 16.92848014831543 70.21874237060547 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.247386932373047 76.03649139404297 0
      vertex 16.92848014831543 70.21874237060547 0
      vertex 19.062833786010742 76.50261688232422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.062833786010742 76.50261688232422 0
      vertex 16.92848014831543 70.21874237060547 0
      vertex 15.84750747680664 69.71863555908203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.062833786010742 76.50261688232422 0
      vertex 15.84750747680664 69.71863555908203 0
      vertex 19 77 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19 77 0
      vertex 15.84750747680664 69.71863555908203 0
      vertex 14.826942443847656 69.10457611083984 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19 77 0
      vertex 14.826942443847656 69.10457611083984 0
      vertex 19.062833786010742 77.49738311767578 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.062833786010742 77.49738311767578 0
      vertex 14.826942443847656 69.10457611083984 0
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.062833786010742 77.49738311767578 0
      vertex 2.2877840995788574 84 0
      vertex 19.247386932373047 77.96350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.247386932373047 77.96350860595703 0
      vertex 2.2877840995788574 84 0
      vertex 19.542062759399414 78.36909484863281 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.542062759399414 78.36909484863281 0
      vertex 2.2877840995788574 84 0
      vertex 19.928346633911133 78.68865203857422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 19.928346633911133 78.68865203857422 0
      vertex 2.2877840995788574 84 0
      vertex 20.38196563720703 78.90211486816406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.38196563720703 78.90211486816406 0
      vertex 2.2877840995788574 84 0
      vertex 20.874418258666992 78.99605560302734 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.874418258666992 78.99605560302734 0
      vertex 2.2877840995788574 84 0
      vertex 39.712215423583984 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 20.874418258666992 78.99605560302734 0
      vertex 39.712215423583984 84 0
      vertex 21.37476348876953 78.9645767211914 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.37476348876953 78.9645767211914 0
      vertex 39.712215423583984 84 0
      vertex 21.851558685302734 78.80965423583984 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 21.851558685302734 78.80965423583984 0
      vertex 39.712215423583984 84 0
      vertex 22.27484703063965 78.54102325439453 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.27484703063965 78.54102325439453 0
      vertex 39.712215423583984 84 0
      vertex 22.61803436279297 78.17556762695312 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.61803436279297 78.17556762695312 0
      vertex 39.712215423583984 84 0
      vertex 22.85955238342285 77.73625183105469 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 22.85955238342285 77.73625183105469 0
      vertex 39.712215423583984 84 0
      vertex 22.984230041503906 77.25066375732422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 14.826942443847656 69.10457611083984 0
      vertex 13.878750801086426 68.38378143310547 0
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 13.878750801086426 68.38378143310547 0
      vertex 13.014049530029297 67.564697265625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 13.014049530029297 67.564697265625 0
      vertex 12.242976188659668 66.65691375732422 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 12.242976188659668 66.65691375732422 0
      vertex 11.574570655822754 65.67108917236328 0
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 11.574570655822754 65.67108917236328 0
      vertex 11.016670227050781 64.61878204345703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 11.016670227050781 64.61878204345703 0
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.792592525482178 35.323524475097656 0
      vertex 4.524954795837402 50.53649139404297 0
      vertex 4.917468070983887 35.625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 35.625 0
      vertex 4.524954795837402 50.53649139404297 0
      vertex 4.819631099700928 50.13090515136719 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.917468070983887 35.625 0
      vertex 4.819631099700928 50.13090515136719 0
      vertex 5.116116523742676 35.88388442993164 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.116116523742676 35.88388442993164 0
      vertex 4.819631099700928 50.13090515136719 0
      vertex 5.205914497375488 49.811344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.116116523742676 35.88388442993164 0
      vertex 5.205914497375488 49.811344146728516 0
      vertex 5.375 36.0825309753418 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.375 36.0825309753418 0
      vertex 5.205914497375488 49.811344146728516 0
      vertex 5.659533977508545 49.59788513183594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.375 36.0825309753418 0
      vertex 5.659533977508545 49.59788513183594 0
      vertex 5.676476001739502 36.2074089050293 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 36.2074089050293 0
      vertex 5.659533977508545 49.59788513183594 0
      vertex 6.151987075805664 49.50394821166992 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 5.676476001739502 36.2074089050293 0
      vertex 6.151987075805664 49.50394821166992 0
      vertex 6 36.25 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 6 36.25 0
      vertex 6.151987075805664 49.50394821166992 0
      vertex 6.6523308753967285 49.53542709350586 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.37476348876953 60.03542709350586 0
      vertex 37.58198547363281 50.76375198364258 0
      vertex 46.874420166015625 60.00394821166992 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.874420166015625 60.00394821166992 0
      vertex 37.58198547363281 50.76375198364258 0
      vertex 37.706661224365234 51.249332427978516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.874420166015625 60.00394821166992 0
      vertex 37.706661224365234 51.249332427978516 0
      vertex 46.38196563720703 60.09788513183594 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.38196563720703 60.09788513183594 0
      vertex 37.706661224365234 51.249332427978516 0
      vertex 37.706661224365234 51.750667572021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 46.38196563720703 60.09788513183594 0
      vertex 37.706661224365234 51.750667572021484 0
      vertex 45.9283447265625 60.311344146728516 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.9283447265625 60.311344146728516 0
      vertex 37.706661224365234 51.750667572021484 0
      vertex 45.54206085205078 60.63090515136719 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.54206085205078 60.63090515136719 0
      vertex 37.706661224365234 51.750667572021484 0
      vertex 37.58198547363281 52.23624801635742 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.54206085205078 60.63090515136719 0
      vertex 37.58198547363281 52.23624801635742 0
      vertex 45.24738693237305 61.03649139404297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 61.03649139404297 0
      vertex 37.58198547363281 52.23624801635742 0
      vertex 37.3404655456543 52.67557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.24738693237305 61.03649139404297 0
      vertex 37.3404655456543 52.67557144165039 0
      vertex 45.06283187866211 61.502620697021484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 61.502620697021484 0
      vertex 37.3404655456543 52.67557144165039 0
      vertex 36.99728012084961 53.0410270690918 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.06283187866211 61.502620697021484 0
      vertex 36.99728012084961 53.0410270690918 0
      vertex 36.57398986816406 53.309654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45 62 0
      vertex 45.06283187866211 61.502620697021484 0
      vertex 36.57398986816406 53.309654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.984230041503906 61.749332427978516 0
      vertex 52 65.9107666015625 0
      vertex 48.859554290771484 61.26375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.859554290771484 61.26375198364258 0
      vertex 52 65.9107666015625 0
      vertex 52 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.859554290771484 61.26375198364258 0
      vertex 52 18.0892333984375 0
      vertex 48.859554290771484 22.736249923706055 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.859554290771484 22.736249923706055 0
      vertex 52 18.0892333984375 0
      vertex 48.984230041503906 22.25066566467285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.984230041503906 22.25066566467285 0
      vertex 52 18.0892333984375 0
      vertex 48.984230041503906 21.74933433532715 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.984230041503906 21.74933433532715 0
      vertex 52 18.0892333984375 0
      vertex 48.859554290771484 21.263750076293945 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.859554290771484 21.263750076293945 0
      vertex 52 18.0892333984375 0
      vertex 48.61803436279297 20.82442855834961 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.61803436279297 20.82442855834961 0
      vertex 52 18.0892333984375 0
      vertex 48.27484893798828 20.458972930908203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.27484893798828 20.458972930908203 0
      vertex 52 18.0892333984375 0
      vertex 51.93733596801758 17.383974075317383 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.27484893798828 20.458972930908203 0
      vertex 51.93733596801758 17.383974075317383 0
      vertex 51.751304626464844 16.7008113861084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.984230041503906 61.749332427978516 0
      vertex 48.984230041503906 62.250667572021484 0
      vertex 52 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 52 65.9107666015625 0
      vertex 48.984230041503906 62.250667572021484 0
      vertex 48.859554290771484 62.73624801635742 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 52 65.9107666015625 0
      vertex 48.859554290771484 62.73624801635742 0
      vertex 48.61803436279297 63.17557144165039 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.61803436279297 63.17557144165039 0
      vertex 48.27484893798828 63.5410270690918 0
      vertex 52 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 52 65.9107666015625 0
      vertex 48.27484893798828 63.5410270690918 0
      vertex 51.93733596801758 66.61602783203125 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.93733596801758 66.61602783203125 0
      vertex 48.27484893798828 63.5410270690918 0
      vertex 51.751304626464844 67.29918670654297 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.751304626464844 67.29918670654297 0
      vertex 48.27484893798828 63.5410270690918 0
      vertex 51.44773864746094 67.93885040283203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 67.93885040283203 0
      vertex 48.27484893798828 63.5410270690918 0
      vertex 47.851558685302734 63.809654235839844 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 67.93885040283203 0
      vertex 47.851558685302734 63.809654235839844 0
      vertex 47.37476348876953 63.96457290649414 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.37476348876953 63.96457290649414 0
      vertex 46.874420166015625 63.99605178833008 0
      vertex 51.44773864746094 67.93885040283203 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 67.93885040283203 0
      vertex 46.874420166015625 63.99605178833008 0
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 46.874420166015625 63.99605178833008 0
      vertex 46.38196563720703 63.90211486816406 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 46.38196563720703 63.90211486816406 0
      vertex 45.9283447265625 63.688655853271484 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 45.9283447265625 63.688655853271484 0
      vertex 45.54206085205078 63.36909484863281 0
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 45.54206085205078 63.36909484863281 0
      vertex 45.24738693237305 62.96350860595703 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 46.874420166015625 20.00394630432129 0
      vertex 51.44773864746094 16.061153411865234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 16.061153411865234 0
      vertex 46.874420166015625 20.00394630432129 0
      vertex 47.37476348876953 20.035425186157227 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 16.061153411865234 0
      vertex 47.37476348876953 20.035425186157227 0
      vertex 47.851558685302734 20.190345764160156 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 47.851558685302734 20.190345764160156 0
      vertex 48.27484893798828 20.458972930908203 0
      vertex 51.44773864746094 16.061153411865234 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 51.44773864746094 16.061153411865234 0
      vertex 48.27484893798828 20.458972930908203 0
      vertex 51.751304626464844 16.7008113861084 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 48.859554290771484 22.736249923706055 0
      vertex 48.61803436279297 23.17557144165039 0
      vertex 48.859554290771484 61.26375198364258 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -0.7589139938354492 82.59184265136719 0
      vertex -0.2667303681373596 83.07806396484375 0
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex -0.2667303681373596 83.07806396484375 0
      vertex 0.3018741011619568 83.47219848632812 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex 0.3018741011619568 83.47219848632812 0
      vertex 0.9298890233039856 83.76245880126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 0.9298890233039856 83.76245880126953 0
      vertex 1.5985267162322998 83.94017028808594 0
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex 1.5985267162322998 83.94017028808594 0
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 40.40147399902344 83.94017028808594 0
      vertex 41.07011032104492 83.76245880126953 0
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 41.07011032104492 83.76245880126953 0
      vertex 41.69812774658203 83.47219848632812 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 41.69812774658203 83.47219848632812 0
      vertex 42.26673126220703 83.07806396484375 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 42.26673126220703 83.07806396484375 0
      vertex 42.758914947509766 82.59184265136719 0
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 42.26673126220703 0.9219396710395813 0
      vertex 41.69812774658203 0.5278016924858093 0
      vertex 37.25 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 37.25 5 0
      vertex 41.69812774658203 0.5278016924858093 0
      vertex 41.07011032104492 0.2375379502773285 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex -0.2667303681373596 0.9219396710395813 0
      vertex -0.7589139938354492 1.408160924911499 0
      vertex 4.75 5 0
    endloop
  endfacet
  facet normal 0 0 -1
    outer loop
      vertex 4.75 5 0
      vertex -0.7589139938354492 1.408160924911499 0
      vertex -1.1599526405334473 1.9719195365905762 0
    endloop
  endfacet
  facet normal -0.9960757493972778 0.08850472420454025 0
    outer loop
      vertex -10 65.9107666015625 0
      vertex -10 65.9107666015625 3
      vertex -9.937335014343262 66.61602783203125 0
    endloop
  endfacet
  facet normal -0.9960757493972778 0.08850472420454025 0
    outer loop
      vertex -9.937335014343262 66.61602783203125 0
      vertex -10 65.9107666015625 3
      vertex -9.937335014343262 66.61602783203125 3
    endloop
  endfacet
  facet normal -0.9648663401603699 0.2627411186695099 0
    outer loop
      vertex -9.937335014343262 66.61602783203125 0
      vertex -9.937335014343262 66.61602783203125 3
      vertex -9.751304626464844 67.29918670654297 0
    endloop
  endfacet
  facet normal -0.9648663401603699 0.2627411186695099 0
    outer loop
      vertex -9.751304626464844 67.29918670654297 0
      vertex -9.937335014343262 66.61602783203125 3
      vertex -9.751304626464844 67.29918670654297 3
    endloop
  endfacet
  facet normal -0.9034254550933838 0.42874521017074585 0
    outer loop
      vertex -9.751304626464844 67.29918670654297 0
      vertex -9.751304626464844 67.29918670654297 3
      vertex -9.447736740112305 67.93885040283203 0
    endloop
  endfacet
  facet normal -0.9034254550933838 0.42874521017074585 0
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -9.751304626464844 67.29918670654297 3
      vertex -9.447736740112305 67.93885040283203 3
    endloop
  endfacet
  facet normal -0.861934244632721 0.507020115852356 0
    outer loop
      vertex -9.447736740112305 67.93885040283203 3
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -9.447736740112305 67.93885040283203 0
    endloop
  endfacet
  facet normal -0.861934244632721 0.507020115852356 0
    outer loop
      vertex -9.447736740112305 67.93885040283203 0
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -1.1599526405334473 82.02808380126953 0
    endloop
  endfacet
  facet normal -0.8148572444915771 0.5796616673469543 0
    outer loop
      vertex -1.1599526405334473 82.02808380126953 0
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -0.7589139938354492 82.59184265136719 0
    endloop
  endfacet
  facet normal -0.8148572444915771 0.5796616673469543 -2.4124620656457586e-16
    outer loop
      vertex -0.7589139938354492 82.59184265136719 0
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -0.7589139938354492 82.59184265136719 3
    endloop
  endfacet
  facet normal -0.7027845978736877 0.7114027142524719 -2.080660334313834e-16
    outer loop
      vertex -0.7589139938354492 82.59184265136719 0
      vertex -0.7589139938354492 82.59184265136719 3
      vertex -0.2667303681373596 83.07806396484375 0
    endloop
  endfacet
  facet normal -0.7027845978736877 0.7114027142524719 -1.4304540211997914e-16
    outer loop
      vertex -0.2667303681373596 83.07806396484375 0
      vertex -0.7589139938354492 82.59184265136719 3
      vertex -0.2667303681373596 83.07806396484375 3
    endloop
  endfacet
  facet normal -0.5696874260902405 0.8218614459037781 -1.1595468119349585e-16
    outer loop
      vertex -0.2667303681373596 83.07806396484375 0
      vertex -0.2667303681373596 83.07806396484375 3
      vertex 0.3018741011619568 83.47219848632812 0
    endloop
  endfacet
  facet normal -0.5696874260902405 0.8218614459037781 -7.378934799195228e-17
    outer loop
      vertex 0.3018741011619568 83.47219848632812 0
      vertex -0.2667303681373596 83.07806396484375 3
      vertex 0.3018741011619568 83.47219848632812 3
    endloop
  endfacet
  facet normal -0.41954749822616577 0.9077333807945251 -5.43423185559408e-17
    outer loop
      vertex 0.3018741011619568 83.47219848632812 0
      vertex 0.3018741011619568 83.47219848632812 3
      vertex 0.9298890233039856 83.76245880126953 0
    endloop
  endfacet
  facet normal -0.41954749822616577 0.9077333807945251 -4.6579129245457126e-17
    outer loop
      vertex 0.9298890233039856 83.76245880126953 0
      vertex 0.3018741011619568 83.47219848632812 3
      vertex 0.9298890233039856 83.76245880126953 3
    endloop
  endfacet
  facet normal -0.25685641169548035 0.9664495587348938 -2.851679022869206e-17
    outer loop
      vertex 0.9298890233039856 83.76245880126953 0
      vertex 0.9298890233039856 83.76245880126953 3
      vertex 1.5985267162322998 83.94017028808594 0
    endloop
  endfacet
  facet normal -0.25685641169548035 0.9664495587348938 -3.802238586868193e-17
    outer loop
      vertex 1.5985267162322998 83.94017028808594 0
      vertex 0.9298890233039856 83.76245880126953 3
      vertex 1.5985267162322998 83.94017028808594 3
    endloop
  endfacet
  facet normal -0.08648119121789932 0.996253490447998 -1.2801787958283028e-17
    outer loop
      vertex 1.5985267162322998 83.94017028808594 0
      vertex 1.5985267162322998 83.94017028808594 3
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal -0.08648119121789932 0.996253490447998 0
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 1.5985267162322998 83.94017028808594 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0.08648119121789932 0.996253490447998 0
    outer loop
      vertex 39.712215423583984 84 0
      vertex 39.712215423583984 84 3
      vertex 40.40147399902344 83.94017028808594 0
    endloop
  endfacet
  facet normal 0.08648119121789932 0.996253490447998 0
    outer loop
      vertex 40.40147399902344 83.94017028808594 0
      vertex 39.712215423583984 84 3
      vertex 40.40147399902344 83.94017028808594 3
    endloop
  endfacet
  facet normal 0.25685641169548035 0.9664495587348938 0
    outer loop
      vertex 40.40147399902344 83.94017028808594 0
      vertex 40.40147399902344 83.94017028808594 3
      vertex 41.07011032104492 83.76245880126953 0
    endloop
  endfacet
  facet normal 0.25685641169548035 0.9664495587348938 0
    outer loop
      vertex 41.07011032104492 83.76245880126953 0
      vertex 40.40147399902344 83.94017028808594 3
      vertex 41.07011032104492 83.76245880126953 3
    endloop
  endfacet
  facet normal 0.41954749822616577 0.9077333807945251 0
    outer loop
      vertex 41.07011032104492 83.76245880126953 0
      vertex 41.07011032104492 83.76245880126953 3
      vertex 41.69812774658203 83.47219848632812 0
    endloop
  endfacet
  facet normal 0.41954749822616577 0.9077333807945251 0
    outer loop
      vertex 41.69812774658203 83.47219848632812 0
      vertex 41.07011032104492 83.76245880126953 3
      vertex 41.69812774658203 83.47219848632812 3
    endloop
  endfacet
  facet normal 0.5696874260902405 0.8218614459037781 0
    outer loop
      vertex 41.69812774658203 83.47219848632812 0
      vertex 41.69812774658203 83.47219848632812 3
      vertex 42.26673126220703 83.07806396484375 0
    endloop
  endfacet
  facet normal 0.5696874260902405 0.8218614459037781 0
    outer loop
      vertex 42.26673126220703 83.07806396484375 0
      vertex 41.69812774658203 83.47219848632812 3
      vertex 42.26673126220703 83.07806396484375 3
    endloop
  endfacet
  facet normal 0.7027845978736877 0.7114027142524719 0
    outer loop
      vertex 42.26673126220703 83.07806396484375 0
      vertex 42.26673126220703 83.07806396484375 3
      vertex 42.758914947509766 82.59184265136719 0
    endloop
  endfacet
  facet normal 0.7027845978736877 0.7114027142524719 0
    outer loop
      vertex 42.758914947509766 82.59184265136719 0
      vertex 42.26673126220703 83.07806396484375 3
      vertex 42.758914947509766 82.59184265136719 3
    endloop
  endfacet
  facet normal 0.8148572444915771 0.5796616673469543 0
    outer loop
      vertex 42.758914947509766 82.59184265136719 0
      vertex 42.758914947509766 82.59184265136719 3
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0.8148572444915771 0.5796616673469543 0
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 42.758914947509766 82.59184265136719 3
      vertex 43.15995407104492 82.02808380126953 3
    endloop
  endfacet
  facet normal 0.861934244632721 0.507020115852356 0
    outer loop
      vertex 43.15995407104492 82.02808380126953 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 43.15995407104492 82.02808380126953 0
    endloop
  endfacet
  facet normal 0.861934244632721 0.507020115852356 0
    outer loop
      vertex 43.15995407104492 82.02808380126953 0
      vertex 51.44773864746094 67.93885040283203 3
      vertex 51.44773864746094 67.93885040283203 0
    endloop
  endfacet
  facet normal 0.9034254550933838 0.42874521017074585 0
    outer loop
      vertex 51.44773864746094 67.93885040283203 0
      vertex 51.44773864746094 67.93885040283203 3
      vertex 51.751304626464844 67.29918670654297 0
    endloop
  endfacet
  facet normal 0.9034254550933838 0.42874521017074585 0
    outer loop
      vertex 51.751304626464844 67.29918670654297 0
      vertex 51.44773864746094 67.93885040283203 3
      vertex 51.751304626464844 67.29918670654297 3
    endloop
  endfacet
  facet normal 0.9648663401603699 0.2627411186695099 0
    outer loop
      vertex 51.751304626464844 67.29918670654297 0
      vertex 51.751304626464844 67.29918670654297 3
      vertex 51.93733596801758 66.61602783203125 0
    endloop
  endfacet
  facet normal 0.9648663401603699 0.2627411186695099 0
    outer loop
      vertex 51.93733596801758 66.61602783203125 0
      vertex 51.751304626464844 67.29918670654297 3
      vertex 51.93733596801758 66.61602783203125 3
    endloop
  endfacet
  facet normal 0.9960757493972778 0.08850472420454025 0
    outer loop
      vertex 51.93733596801758 66.61602783203125 0
      vertex 51.93733596801758 66.61602783203125 3
      vertex 52 65.9107666015625 0
    endloop
  endfacet
  facet normal 0.9960757493972778 0.08850472420454025 0
    outer loop
      vertex 52 65.9107666015625 0
      vertex 51.93733596801758 66.61602783203125 3
      vertex 52 65.9107666015625 3
    endloop
  endfacet
  facet normal 0.9960757493972778 -0.08850472420454025 0
    outer loop
      vertex 52 18.0892333984375 0
      vertex 52 18.0892333984375 3
      vertex 51.93733596801758 17.383974075317383 0
    endloop
  endfacet
  facet normal 0.9960757493972778 -0.08850472420454025 0
    outer loop
      vertex 51.93733596801758 17.383974075317383 0
      vertex 52 18.0892333984375 3
      vertex 51.93733596801758 17.383974075317383 3
    endloop
  endfacet
  facet normal 0.9648663401603699 -0.2627411186695099 0
    outer loop
      vertex 51.93733596801758 17.383974075317383 0
      vertex 51.93733596801758 17.383974075317383 3
      vertex 51.751304626464844 16.7008113861084 0
    endloop
  endfacet
  facet normal 0.9648663401603699 -0.2627411186695099 0
    outer loop
      vertex 51.751304626464844 16.7008113861084 0
      vertex 51.93733596801758 17.383974075317383 3
      vertex 51.751304626464844 16.7008113861084 3
    endloop
  endfacet
  facet normal 0.9034254550933838 -0.42874521017074585 0
    outer loop
      vertex 51.751304626464844 16.7008113861084 0
      vertex 51.751304626464844 16.7008113861084 3
      vertex 51.44773864746094 16.061153411865234 0
    endloop
  endfacet
  facet normal 0.9034254550933838 -0.42874521017074585 0
    outer loop
      vertex 51.44773864746094 16.061153411865234 0
      vertex 51.751304626464844 16.7008113861084 3
      vertex 51.44773864746094 16.061153411865234 3
    endloop
  endfacet
  facet normal 0.861934244632721 -0.507020115852356 0
    outer loop
      vertex 51.44773864746094 16.061153411865234 3
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 51.44773864746094 16.061153411865234 0
    endloop
  endfacet
  facet normal 0.861934244632721 -0.507020115852356 0
    outer loop
      vertex 51.44773864746094 16.061153411865234 0
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 43.15995407104492 1.9719195365905762 0
    endloop
  endfacet
  facet normal 0.8148572444915771 -0.5796616673469543 0
    outer loop
      vertex 43.15995407104492 1.9719195365905762 0
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 42.758914947509766 1.408160924911499 0
    endloop
  endfacet
  facet normal 0.8148572444915771 -0.5796616673469543 -8.58071639441596e-17
    outer loop
      vertex 42.758914947509766 1.408160924911499 0
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 42.758914947509766 1.408160924911499 3
    endloop
  endfacet
  facet normal 0.7027845978736877 -0.7114027142524719 -1.0530875421337508e-16
    outer loop
      vertex 42.758914947509766 1.408160924911499 0
      vertex 42.758914947509766 1.408160924911499 3
      vertex 42.26673126220703 0.9219396710395813 0
    endloop
  endfacet
  facet normal 0.7027845978736877 -0.7114027142524719 -2.632718855334377e-17
    outer loop
      vertex 42.26673126220703 0.9219396710395813 0
      vertex 42.758914947509766 1.408160924911499 3
      vertex 42.26673126220703 0.9219396710395813 3
    endloop
  endfacet
  facet normal 0.5696874260902405 -0.8218614459037781 -3.041498444604405e-17
    outer loop
      vertex 42.26673126220703 0.9219396710395813 0
      vertex 42.26673126220703 0.9219396710395813 3
      vertex 41.69812774658203 0.5278016924858093 0
    endloop
  endfacet
  facet normal 0.5696874260902405 -0.8218614459037781 0
    outer loop
      vertex 41.69812774658203 0.5278016924858093 0
      vertex 42.26673126220703 0.9219396710395813 3
      vertex 41.69812774658203 0.5278016924858093 3
    endloop
  endfacet
  facet normal 0.41954749822616577 -0.9077333807945251 0
    outer loop
      vertex 41.69812774658203 0.5278016924858093 0
      vertex 41.69812774658203 0.5278016924858093 3
      vertex 41.07011032104492 0.2375379502773285 0
    endloop
  endfacet
  facet normal 0.41954749822616577 -0.9077333807945251 -1.679644165964861e-17
    outer loop
      vertex 41.07011032104492 0.2375379502773285 0
      vertex 41.69812774658203 0.5278016924858093 3
      vertex 41.07011032104492 0.2375379502773285 3
    endloop
  endfacet
  facet normal 0.25685641169548035 -0.9664495587348938 -1.788291030701251e-17
    outer loop
      vertex 41.07011032104492 0.2375379502773285 0
      vertex 41.07011032104492 0.2375379502773285 3
      vertex 40.40147399902344 0.059831973165273666 0
    endloop
  endfacet
  facet normal 0.25685641169548035 -0.9664495587348938 -8.941454491761766e-17
    outer loop
      vertex 40.40147399902344 0.059831973165273666 0
      vertex 41.07011032104492 0.2375379502773285 3
      vertex 40.40147399902344 0.059831973165273666 3
    endloop
  endfacet
  facet normal 0.08648119121789932 -0.996253490447998 -9.217196141573052e-17
    outer loop
      vertex 40.40147399902344 0.059831973165273666 0
      vertex 40.40147399902344 0.059831973165273666 3
      vertex 39.712215423583984 0 0
    endloop
  endfacet
  facet normal 0.08648119121789932 -0.996253490447998 0
    outer loop
      vertex 39.712215423583984 0 0
      vertex 40.40147399902344 0.059831973165273666 3
      vertex 39.712215423583984 0 3
    endloop
  endfacet
  facet normal -0.08648119121789932 -0.996253490447998 0
    outer loop
      vertex 2.2877840995788574 0 0
      vertex 2.2877840995788574 0 3
      vertex 1.5985267162322998 0.059831973165273666 0
    endloop
  endfacet
  facet normal -0.08648119121789932 -0.996253490447998 0
    outer loop
      vertex 1.5985267162322998 0.059831973165273666 0
      vertex 2.2877840995788574 0 3
      vertex 1.5985267162322998 0.059831973165273666 3
    endloop
  endfacet
  facet normal -0.25685641169548035 -0.9664495587348938 0
    outer loop
      vertex 1.5985267162322998 0.059831973165273666 0
      vertex 1.5985267162322998 0.059831973165273666 3
      vertex 0.9298890233039856 0.2375379502773285 0
    endloop
  endfacet
  facet normal -0.25685641169548035 -0.9664495587348938 0
    outer loop
      vertex 0.9298890233039856 0.2375379502773285 0
      vertex 1.5985267162322998 0.059831973165273666 3
      vertex 0.9298890233039856 0.2375379502773285 3
    endloop
  endfacet
  facet normal -0.41954749822616577 -0.9077333807945251 0
    outer loop
      vertex 0.9298890233039856 0.2375379502773285 0
      vertex 0.9298890233039856 0.2375379502773285 3
      vertex 0.3018741011619568 0.5278016924858093 0
    endloop
  endfacet
  facet normal -0.41954749822616577 -0.9077333807945251 0
    outer loop
      vertex 0.3018741011619568 0.5278016924858093 0
      vertex 0.9298890233039856 0.2375379502773285 3
      vertex 0.3018741011619568 0.5278016924858093 3
    endloop
  endfacet
  facet normal -0.5696874260902405 -0.8218614459037781 0
    outer loop
      vertex 0.3018741011619568 0.5278016924858093 0
      vertex 0.3018741011619568 0.5278016924858093 3
      vertex -0.2667303681373596 0.9219396710395813 0
    endloop
  endfacet
  facet normal -0.5696874260902405 -0.8218614459037781 0
    outer loop
      vertex -0.2667303681373596 0.9219396710395813 0
      vertex 0.3018741011619568 0.5278016924858093 3
      vertex -0.2667303681373596 0.9219396710395813 3
    endloop
  endfacet
  facet normal -0.7027845978736877 -0.7114027142524719 0
    outer loop
      vertex -0.2667303681373596 0.9219396710395813 0
      vertex -0.2667303681373596 0.9219396710395813 3
      vertex -0.7589139938354492 1.408160924911499 0
    endloop
  endfacet
  facet normal -0.7027845978736877 -0.7114027142524719 0
    outer loop
      vertex -0.7589139938354492 1.408160924911499 0
      vertex -0.2667303681373596 0.9219396710395813 3
      vertex -0.7589139938354492 1.408160924911499 3
    endloop
  endfacet
  facet normal -0.8148572444915771 -0.5796616673469543 0
    outer loop
      vertex -0.7589139938354492 1.408160924911499 0
      vertex -0.7589139938354492 1.408160924911499 3
      vertex -1.1599526405334473 1.9719195365905762 0
    endloop
  endfacet
  facet normal -0.8148572444915771 -0.5796616673469543 0
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 0
      vertex -0.7589139938354492 1.408160924911499 3
      vertex -1.1599526405334473 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 4.792592525482178 34.676475524902344 3
      vertex 4.792592525482178 34.676475524902344 0
      vertex 4.75 35 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 4.75 35 3
      vertex 4.792592525482178 34.676475524902344 0
      vertex 4.75 35 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 4.75 35 3
      vertex 4.75 35 0
      vertex 4.792592525482178 35.323524475097656 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex 4.75 35 0
      vertex 4.792592525482178 35.323524475097656 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex 4.792592525482178 35.323524475097656 0
      vertex 4.917468070983887 35.625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 4.917468070983887 35.625 3
      vertex 4.792592525482178 35.323524475097656 0
      vertex 4.917468070983887 35.625 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 4.917468070983887 35.625 3
      vertex 4.917468070983887 35.625 0
      vertex 5.116116523742676 35.88388442993164 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 5.116116523742676 35.88388442993164 3
      vertex 4.917468070983887 35.625 0
      vertex 5.116116523742676 35.88388442993164 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 5.116116523742676 35.88388442993164 3
      vertex 5.116116523742676 35.88388442993164 0
      vertex 5.375 36.0825309753418 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 5.375 36.0825309753418 3
      vertex 5.116116523742676 35.88388442993164 0
      vertex 5.375 36.0825309753418 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 5.375 36.0825309753418 3
      vertex 5.375 36.0825309753418 0
      vertex 5.676476001739502 36.2074089050293 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 5.676476001739502 36.2074089050293 3
      vertex 5.375 36.0825309753418 0
      vertex 5.676476001739502 36.2074089050293 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 5.676476001739502 36.2074089050293 3
      vertex 5.676476001739502 36.2074089050293 0
      vertex 6 36.25 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6 36.25 3
      vertex 5.676476001739502 36.2074089050293 0
      vertex 6 36.25 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6 36.25 3
      vertex 6 36.25 0
      vertex 6.323523998260498 36.2074089050293 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6.323523998260498 36.2074089050293 3
      vertex 6 36.25 0
      vertex 6.323523998260498 36.2074089050293 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 6.323523998260498 36.2074089050293 3
      vertex 6.323523998260498 36.2074089050293 0
      vertex 6.625 36.0825309753418 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 6.625 36.0825309753418 3
      vertex 6.323523998260498 36.2074089050293 0
      vertex 6.625 36.0825309753418 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 6.625 36.0825309753418 3
      vertex 6.625 36.0825309753418 0
      vertex 6.883883476257324 35.88388442993164 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 6.883883476257324 35.88388442993164 3
      vertex 6.625 36.0825309753418 0
      vertex 6.883883476257324 35.88388442993164 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 6.883883476257324 35.88388442993164 3
      vertex 6.883883476257324 35.88388442993164 0
      vertex 7.082531929016113 35.625 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 7.082531929016113 35.625 3
      vertex 6.883883476257324 35.88388442993164 0
      vertex 7.082531929016113 35.625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 7.082531929016113 35.625 3
      vertex 7.082531929016113 35.625 0
      vertex 7.207407474517822 35.323524475097656 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 7.082531929016113 35.625 0
      vertex 7.207407474517822 35.323524475097656 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 7.207407474517822 35.323524475097656 0
      vertex 7.25 35 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 7.25 35 3
      vertex 7.207407474517822 35.323524475097656 0
      vertex 7.25 35 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 7.25 35 3
      vertex 7.25 35 0
      vertex 7.207407474517822 34.676475524902344 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 7.207407474517822 34.676475524902344 3
      vertex 7.25 35 0
      vertex 7.207407474517822 34.676475524902344 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 7.207407474517822 34.676475524902344 3
      vertex 7.207407474517822 34.676475524902344 0
      vertex 7.082531929016113 34.375 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 7.082531929016113 34.375 3
      vertex 7.207407474517822 34.676475524902344 0
      vertex 7.082531929016113 34.375 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 7.082531929016113 34.375 3
      vertex 7.082531929016113 34.375 0
      vertex 6.883883476257324 34.11611557006836 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 6.883883476257324 34.11611557006836 3
      vertex 7.082531929016113 34.375 0
      vertex 6.883883476257324 34.11611557006836 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 6.883883476257324 34.11611557006836 3
      vertex 6.883883476257324 34.11611557006836 0
      vertex 6.625 33.9174690246582 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 6.625 33.9174690246582 3
      vertex 6.883883476257324 34.11611557006836 0
      vertex 6.625 33.9174690246582 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 6.625 33.9174690246582 3
      vertex 6.625 33.9174690246582 0
      vertex 6.323523998260498 33.7925910949707 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 6.323523998260498 33.7925910949707 3
      vertex 6.625 33.9174690246582 0
      vertex 6.323523998260498 33.7925910949707 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6.323523998260498 33.7925910949707 3
      vertex 6.323523998260498 33.7925910949707 0
      vertex 6 33.75 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6 33.75 3
      vertex 6.323523998260498 33.7925910949707 0
      vertex 6 33.75 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6 33.75 3
      vertex 6 33.75 0
      vertex 5.676476001739502 33.7925910949707 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 5.676476001739502 33.7925910949707 3
      vertex 6 33.75 0
      vertex 5.676476001739502 33.7925910949707 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 5.676476001739502 33.7925910949707 3
      vertex 5.676476001739502 33.7925910949707 0
      vertex 5.375 33.9174690246582 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 5.375 33.9174690246582 3
      vertex 5.676476001739502 33.7925910949707 0
      vertex 5.375 33.9174690246582 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 5.375 33.9174690246582 3
      vertex 5.375 33.9174690246582 0
      vertex 5.116116523742676 34.11611557006836 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 5.116116523742676 34.11611557006836 3
      vertex 5.375 33.9174690246582 0
      vertex 5.116116523742676 34.11611557006836 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 5.116116523742676 34.11611557006836 3
      vertex 5.116116523742676 34.11611557006836 0
      vertex 4.917468070983887 34.375 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 4.917468070983887 34.375 3
      vertex 5.116116523742676 34.11611557006836 0
      vertex 4.917468070983887 34.375 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 4.917468070983887 34.375 3
      vertex 4.917468070983887 34.375 0
      vertex 4.792592525482178 34.676475524902344 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 4.792592525482178 34.676475524902344 3
      vertex 4.917468070983887 34.375 0
      vertex 4.792592525482178 34.676475524902344 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 45.06283187866211 21.502620697021484 3
      vertex 45.06283187866211 21.502620697021484 0
      vertex 45 22 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 45 22 3
      vertex 45.06283187866211 21.502620697021484 0
      vertex 45 22 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 45 22 3
      vertex 45 22 0
      vertex 45.06283187866211 22.497379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 45.06283187866211 22.497379302978516 3
      vertex 45 22 0
      vertex 45.06283187866211 22.497379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 45.06283187866211 22.497379302978516 3
      vertex 45.06283187866211 22.497379302978516 0
      vertex 45.24738693237305 22.9635066986084 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 45.24738693237305 22.9635066986084 3
      vertex 45.06283187866211 22.497379302978516 0
      vertex 45.24738693237305 22.9635066986084 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 45.24738693237305 22.9635066986084 3
      vertex 45.24738693237305 22.9635066986084 0
      vertex 45.54206085205078 23.369094848632812 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 45.54206085205078 23.369094848632812 3
      vertex 45.24738693237305 22.9635066986084 0
      vertex 45.54206085205078 23.369094848632812 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 45.54206085205078 23.369094848632812 3
      vertex 45.54206085205078 23.369094848632812 0
      vertex 45.9283447265625 23.688655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 45.9283447265625 23.688655853271484 3
      vertex 45.54206085205078 23.369094848632812 0
      vertex 45.9283447265625 23.688655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 45.9283447265625 23.688655853271484 3
      vertex 45.9283447265625 23.688655853271484 0
      vertex 46.38196563720703 23.90211296081543 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 46.38196563720703 23.90211296081543 3
      vertex 45.9283447265625 23.688655853271484 0
      vertex 46.38196563720703 23.90211296081543 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 46.38196563720703 23.90211296081543 3
      vertex 46.38196563720703 23.90211296081543 0
      vertex 46.874420166015625 23.99605369567871 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 46.874420166015625 23.99605369567871 3
      vertex 46.38196563720703 23.90211296081543 0
      vertex 46.874420166015625 23.99605369567871 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 46.874420166015625 23.99605369567871 3
      vertex 46.874420166015625 23.99605369567871 0
      vertex 47.37476348876953 23.964574813842773 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 47.37476348876953 23.964574813842773 3
      vertex 46.874420166015625 23.99605369567871 0
      vertex 47.37476348876953 23.964574813842773 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 47.37476348876953 23.964574813842773 3
      vertex 47.37476348876953 23.964574813842773 0
      vertex 47.851558685302734 23.809654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 47.851558685302734 23.809654235839844 3
      vertex 47.37476348876953 23.964574813842773 0
      vertex 47.851558685302734 23.809654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 47.851558685302734 23.809654235839844 3
      vertex 47.851558685302734 23.809654235839844 0
      vertex 48.27484893798828 23.541027069091797 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 48.27484893798828 23.541027069091797 3
      vertex 47.851558685302734 23.809654235839844 0
      vertex 48.27484893798828 23.541027069091797 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 48.27484893798828 23.541027069091797 3
      vertex 48.27484893798828 23.541027069091797 0
      vertex 48.61803436279297 23.17557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 48.61803436279297 23.17557144165039 3
      vertex 48.27484893798828 23.541027069091797 0
      vertex 48.61803436279297 23.17557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 48.61803436279297 23.17557144165039 3
      vertex 48.61803436279297 23.17557144165039 0
      vertex 48.859554290771484 22.736249923706055 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 48.859554290771484 22.736249923706055 3
      vertex 48.61803436279297 23.17557144165039 0
      vertex 48.859554290771484 22.736249923706055 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 48.859554290771484 22.736249923706055 3
      vertex 48.859554290771484 22.736249923706055 0
      vertex 48.984230041503906 22.25066566467285 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 48.984230041503906 22.25066566467285 3
      vertex 48.859554290771484 22.736249923706055 0
      vertex 48.984230041503906 22.25066566467285 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 48.984230041503906 22.25066566467285 3
      vertex 48.984230041503906 22.25066566467285 0
      vertex 48.984230041503906 21.74933433532715 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 48.984230041503906 21.74933433532715 3
      vertex 48.984230041503906 22.25066566467285 0
      vertex 48.984230041503906 21.74933433532715 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 48.984230041503906 21.74933433532715 3
      vertex 48.984230041503906 21.74933433532715 0
      vertex 48.859554290771484 21.263750076293945 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 48.859554290771484 21.263750076293945 3
      vertex 48.984230041503906 21.74933433532715 0
      vertex 48.859554290771484 21.263750076293945 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 48.859554290771484 21.263750076293945 3
      vertex 48.859554290771484 21.263750076293945 0
      vertex 48.61803436279297 20.82442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 48.61803436279297 20.82442855834961 3
      vertex 48.859554290771484 21.263750076293945 0
      vertex 48.61803436279297 20.82442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 48.61803436279297 20.82442855834961 3
      vertex 48.61803436279297 20.82442855834961 0
      vertex 48.27484893798828 20.458972930908203 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 48.27484893798828 20.458972930908203 3
      vertex 48.61803436279297 20.82442855834961 0
      vertex 48.27484893798828 20.458972930908203 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 48.27484893798828 20.458972930908203 3
      vertex 48.27484893798828 20.458972930908203 0
      vertex 47.851558685302734 20.190345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 47.851558685302734 20.190345764160156 3
      vertex 48.27484893798828 20.458972930908203 0
      vertex 47.851558685302734 20.190345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 47.851558685302734 20.190345764160156 3
      vertex 47.851558685302734 20.190345764160156 0
      vertex 47.37476348876953 20.035425186157227 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 47.37476348876953 20.035425186157227 3
      vertex 47.851558685302734 20.190345764160156 0
      vertex 47.37476348876953 20.035425186157227 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 47.37476348876953 20.035425186157227 3
      vertex 47.37476348876953 20.035425186157227 0
      vertex 46.874420166015625 20.00394630432129 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 46.874420166015625 20.00394630432129 3
      vertex 47.37476348876953 20.035425186157227 0
      vertex 46.874420166015625 20.00394630432129 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 46.874420166015625 20.00394630432129 3
      vertex 46.874420166015625 20.00394630432129 0
      vertex 46.38196563720703 20.09788703918457 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 46.38196563720703 20.09788703918457 3
      vertex 46.874420166015625 20.00394630432129 0
      vertex 46.38196563720703 20.09788703918457 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 46.38196563720703 20.09788703918457 3
      vertex 46.38196563720703 20.09788703918457 0
      vertex 45.9283447265625 20.311344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 45.9283447265625 20.311344146728516 3
      vertex 46.38196563720703 20.09788703918457 0
      vertex 45.9283447265625 20.311344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 45.9283447265625 20.311344146728516 3
      vertex 45.9283447265625 20.311344146728516 0
      vertex 45.54206085205078 20.630905151367188 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 45.54206085205078 20.630905151367188 3
      vertex 45.9283447265625 20.311344146728516 0
      vertex 45.54206085205078 20.630905151367188 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 45.54206085205078 20.630905151367188 3
      vertex 45.54206085205078 20.630905151367188 0
      vertex 45.24738693237305 21.0364933013916 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 45.24738693237305 21.0364933013916 3
      vertex 45.54206085205078 20.630905151367188 0
      vertex 45.24738693237305 21.0364933013916 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 45.24738693237305 21.0364933013916 3
      vertex 45.24738693237305 21.0364933013916 0
      vertex 45.06283187866211 21.502620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 45.06283187866211 21.502620697021484 3
      vertex 45.24738693237305 21.0364933013916 0
      vertex 45.06283187866211 21.502620697021484 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 45.06283187866211 61.502620697021484 3
      vertex 45.06283187866211 61.502620697021484 0
      vertex 45 62 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 45 62 3
      vertex 45.06283187866211 61.502620697021484 0
      vertex 45 62 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 45 62 3
      vertex 45 62 0
      vertex 45.06283187866211 62.497379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 45.06283187866211 62.497379302978516 3
      vertex 45 62 0
      vertex 45.06283187866211 62.497379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 45.06283187866211 62.497379302978516 3
      vertex 45.06283187866211 62.497379302978516 0
      vertex 45.24738693237305 62.96350860595703 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 45.24738693237305 62.96350860595703 3
      vertex 45.06283187866211 62.497379302978516 0
      vertex 45.24738693237305 62.96350860595703 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 45.24738693237305 62.96350860595703 3
      vertex 45.24738693237305 62.96350860595703 0
      vertex 45.54206085205078 63.36909484863281 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 45.54206085205078 63.36909484863281 3
      vertex 45.24738693237305 62.96350860595703 0
      vertex 45.54206085205078 63.36909484863281 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 45.54206085205078 63.36909484863281 3
      vertex 45.54206085205078 63.36909484863281 0
      vertex 45.9283447265625 63.688655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 45.9283447265625 63.688655853271484 3
      vertex 45.54206085205078 63.36909484863281 0
      vertex 45.9283447265625 63.688655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 45.9283447265625 63.688655853271484 3
      vertex 45.9283447265625 63.688655853271484 0
      vertex 46.38196563720703 63.90211486816406 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 46.38196563720703 63.90211486816406 3
      vertex 45.9283447265625 63.688655853271484 0
      vertex 46.38196563720703 63.90211486816406 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 46.38196563720703 63.90211486816406 3
      vertex 46.38196563720703 63.90211486816406 0
      vertex 46.874420166015625 63.99605178833008 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 46.874420166015625 63.99605178833008 3
      vertex 46.38196563720703 63.90211486816406 0
      vertex 46.874420166015625 63.99605178833008 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 46.874420166015625 63.99605178833008 3
      vertex 46.874420166015625 63.99605178833008 0
      vertex 47.37476348876953 63.96457290649414 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 47.37476348876953 63.96457290649414 3
      vertex 46.874420166015625 63.99605178833008 0
      vertex 47.37476348876953 63.96457290649414 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 47.37476348876953 63.96457290649414 3
      vertex 47.37476348876953 63.96457290649414 0
      vertex 47.851558685302734 63.809654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 47.851558685302734 63.809654235839844 3
      vertex 47.37476348876953 63.96457290649414 0
      vertex 47.851558685302734 63.809654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 47.851558685302734 63.809654235839844 3
      vertex 47.851558685302734 63.809654235839844 0
      vertex 48.27484893798828 63.5410270690918 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 48.27484893798828 63.5410270690918 3
      vertex 47.851558685302734 63.809654235839844 0
      vertex 48.27484893798828 63.5410270690918 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 48.27484893798828 63.5410270690918 3
      vertex 48.27484893798828 63.5410270690918 0
      vertex 48.61803436279297 63.17557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 48.61803436279297 63.17557144165039 3
      vertex 48.27484893798828 63.5410270690918 0
      vertex 48.61803436279297 63.17557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 48.61803436279297 63.17557144165039 3
      vertex 48.61803436279297 63.17557144165039 0
      vertex 48.859554290771484 62.73624801635742 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 48.859554290771484 62.73624801635742 3
      vertex 48.61803436279297 63.17557144165039 0
      vertex 48.859554290771484 62.73624801635742 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 48.859554290771484 62.73624801635742 3
      vertex 48.859554290771484 62.73624801635742 0
      vertex 48.984230041503906 62.250667572021484 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 48.984230041503906 62.250667572021484 3
      vertex 48.859554290771484 62.73624801635742 0
      vertex 48.984230041503906 62.250667572021484 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 48.984230041503906 62.250667572021484 3
      vertex 48.984230041503906 62.250667572021484 0
      vertex 48.984230041503906 61.749332427978516 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 48.984230041503906 61.749332427978516 3
      vertex 48.984230041503906 62.250667572021484 0
      vertex 48.984230041503906 61.749332427978516 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 48.984230041503906 61.749332427978516 3
      vertex 48.984230041503906 61.749332427978516 0
      vertex 48.859554290771484 61.26375198364258 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 48.859554290771484 61.26375198364258 3
      vertex 48.984230041503906 61.749332427978516 0
      vertex 48.859554290771484 61.26375198364258 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 48.859554290771484 61.26375198364258 3
      vertex 48.859554290771484 61.26375198364258 0
      vertex 48.61803436279297 60.82442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 48.61803436279297 60.82442855834961 3
      vertex 48.859554290771484 61.26375198364258 0
      vertex 48.61803436279297 60.82442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 48.61803436279297 60.82442855834961 3
      vertex 48.61803436279297 60.82442855834961 0
      vertex 48.27484893798828 60.4589729309082 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 48.27484893798828 60.4589729309082 3
      vertex 48.61803436279297 60.82442855834961 0
      vertex 48.27484893798828 60.4589729309082 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 48.27484893798828 60.4589729309082 3
      vertex 48.27484893798828 60.4589729309082 0
      vertex 47.851558685302734 60.190345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 47.851558685302734 60.190345764160156 3
      vertex 48.27484893798828 60.4589729309082 0
      vertex 47.851558685302734 60.190345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 47.851558685302734 60.190345764160156 3
      vertex 47.851558685302734 60.190345764160156 0
      vertex 47.37476348876953 60.03542709350586 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 47.37476348876953 60.03542709350586 3
      vertex 47.851558685302734 60.190345764160156 0
      vertex 47.37476348876953 60.03542709350586 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 47.37476348876953 60.03542709350586 3
      vertex 47.37476348876953 60.03542709350586 0
      vertex 46.874420166015625 60.00394821166992 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 46.874420166015625 60.00394821166992 3
      vertex 47.37476348876953 60.03542709350586 0
      vertex 46.874420166015625 60.00394821166992 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 46.874420166015625 60.00394821166992 3
      vertex 46.874420166015625 60.00394821166992 0
      vertex 46.38196563720703 60.09788513183594 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 46.38196563720703 60.09788513183594 3
      vertex 46.874420166015625 60.00394821166992 0
      vertex 46.38196563720703 60.09788513183594 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 46.38196563720703 60.09788513183594 3
      vertex 46.38196563720703 60.09788513183594 0
      vertex 45.9283447265625 60.311344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 45.9283447265625 60.311344146728516 3
      vertex 46.38196563720703 60.09788513183594 0
      vertex 45.9283447265625 60.311344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 45.9283447265625 60.311344146728516 3
      vertex 45.9283447265625 60.311344146728516 0
      vertex 45.54206085205078 60.63090515136719 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 45.54206085205078 60.63090515136719 3
      vertex 45.9283447265625 60.311344146728516 0
      vertex 45.54206085205078 60.63090515136719 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 45.54206085205078 60.63090515136719 3
      vertex 45.54206085205078 60.63090515136719 0
      vertex 45.24738693237305 61.03649139404297 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 45.24738693237305 61.03649139404297 3
      vertex 45.54206085205078 60.63090515136719 0
      vertex 45.24738693237305 61.03649139404297 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 45.24738693237305 61.03649139404297 3
      vertex 45.24738693237305 61.03649139404297 0
      vertex 45.06283187866211 61.502620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 45.06283187866211 61.502620697021484 3
      vertex 45.24738693237305 61.03649139404297 0
      vertex 45.06283187866211 61.502620697021484 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 19.062833786010742 76.50261688232422 3
      vertex 19.062833786010742 76.50261688232422 0
      vertex 19 77 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 19 77 3
      vertex 19.062833786010742 76.50261688232422 0
      vertex 19 77 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 19 77 3
      vertex 19 77 0
      vertex 19.062833786010742 77.49738311767578 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 19.062833786010742 77.49738311767578 3
      vertex 19 77 0
      vertex 19.062833786010742 77.49738311767578 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 19.062833786010742 77.49738311767578 3
      vertex 19.062833786010742 77.49738311767578 0
      vertex 19.247386932373047 77.96350860595703 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 19.247386932373047 77.96350860595703 3
      vertex 19.062833786010742 77.49738311767578 0
      vertex 19.247386932373047 77.96350860595703 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 19.247386932373047 77.96350860595703 3
      vertex 19.247386932373047 77.96350860595703 0
      vertex 19.542062759399414 78.36909484863281 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 19.542062759399414 78.36909484863281 3
      vertex 19.247386932373047 77.96350860595703 0
      vertex 19.542062759399414 78.36909484863281 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 19.542062759399414 78.36909484863281 3
      vertex 19.542062759399414 78.36909484863281 0
      vertex 19.928346633911133 78.68865203857422 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 19.928346633911133 78.68865203857422 3
      vertex 19.542062759399414 78.36909484863281 0
      vertex 19.928346633911133 78.68865203857422 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 19.928346633911133 78.68865203857422 3
      vertex 19.928346633911133 78.68865203857422 0
      vertex 20.38196563720703 78.90211486816406 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 20.38196563720703 78.90211486816406 3
      vertex 19.928346633911133 78.68865203857422 0
      vertex 20.38196563720703 78.90211486816406 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 20.38196563720703 78.90211486816406 3
      vertex 20.38196563720703 78.90211486816406 0
      vertex 20.874418258666992 78.99605560302734 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 20.874418258666992 78.99605560302734 3
      vertex 20.38196563720703 78.90211486816406 0
      vertex 20.874418258666992 78.99605560302734 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 20.874418258666992 78.99605560302734 3
      vertex 20.874418258666992 78.99605560302734 0
      vertex 21.37476348876953 78.9645767211914 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 21.37476348876953 78.9645767211914 3
      vertex 20.874418258666992 78.99605560302734 0
      vertex 21.37476348876953 78.9645767211914 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 21.37476348876953 78.9645767211914 3
      vertex 21.37476348876953 78.9645767211914 0
      vertex 21.851558685302734 78.80965423583984 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 21.851558685302734 78.80965423583984 3
      vertex 21.37476348876953 78.9645767211914 0
      vertex 21.851558685302734 78.80965423583984 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 21.851558685302734 78.80965423583984 3
      vertex 21.851558685302734 78.80965423583984 0
      vertex 22.27484703063965 78.54102325439453 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 22.27484703063965 78.54102325439453 3
      vertex 21.851558685302734 78.80965423583984 0
      vertex 22.27484703063965 78.54102325439453 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 22.27484703063965 78.54102325439453 3
      vertex 22.27484703063965 78.54102325439453 0
      vertex 22.61803436279297 78.17556762695312 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 22.61803436279297 78.17556762695312 3
      vertex 22.27484703063965 78.54102325439453 0
      vertex 22.61803436279297 78.17556762695312 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 22.61803436279297 78.17556762695312 3
      vertex 22.61803436279297 78.17556762695312 0
      vertex 22.85955238342285 77.73625183105469 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 22.85955238342285 77.73625183105469 3
      vertex 22.61803436279297 78.17556762695312 0
      vertex 22.85955238342285 77.73625183105469 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 22.85955238342285 77.73625183105469 3
      vertex 22.85955238342285 77.73625183105469 0
      vertex 22.984230041503906 77.25066375732422 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 22.984230041503906 77.25066375732422 3
      vertex 22.85955238342285 77.73625183105469 0
      vertex 22.984230041503906 77.25066375732422 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 22.984230041503906 77.25066375732422 3
      vertex 22.984230041503906 77.25066375732422 0
      vertex 22.984230041503906 76.74933624267578 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 22.984230041503906 76.74933624267578 3
      vertex 22.984230041503906 77.25066375732422 0
      vertex 22.984230041503906 76.74933624267578 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 22.984230041503906 76.74933624267578 3
      vertex 22.984230041503906 76.74933624267578 0
      vertex 22.85955238342285 76.26374816894531 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 22.85955238342285 76.26374816894531 3
      vertex 22.984230041503906 76.74933624267578 0
      vertex 22.85955238342285 76.26374816894531 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 22.85955238342285 76.26374816894531 3
      vertex 22.85955238342285 76.26374816894531 0
      vertex 22.61803436279297 75.82443237304688 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 22.61803436279297 75.82443237304688 3
      vertex 22.85955238342285 76.26374816894531 0
      vertex 22.61803436279297 75.82443237304688 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 22.61803436279297 75.82443237304688 3
      vertex 22.61803436279297 75.82443237304688 0
      vertex 22.27484703063965 75.45897674560547 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 22.27484703063965 75.45897674560547 3
      vertex 22.61803436279297 75.82443237304688 0
      vertex 22.27484703063965 75.45897674560547 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 22.27484703063965 75.45897674560547 3
      vertex 22.27484703063965 75.45897674560547 0
      vertex 21.851558685302734 75.19034576416016 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 21.851558685302734 75.19034576416016 3
      vertex 22.27484703063965 75.45897674560547 0
      vertex 21.851558685302734 75.19034576416016 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 21.851558685302734 75.19034576416016 3
      vertex 21.851558685302734 75.19034576416016 0
      vertex 21.37476348876953 75.0354232788086 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 21.37476348876953 75.0354232788086 3
      vertex 21.851558685302734 75.19034576416016 0
      vertex 21.37476348876953 75.0354232788086 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 21.37476348876953 75.0354232788086 3
      vertex 21.37476348876953 75.0354232788086 0
      vertex 20.874418258666992 75.00394439697266 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 20.874418258666992 75.00394439697266 3
      vertex 21.37476348876953 75.0354232788086 0
      vertex 20.874418258666992 75.00394439697266 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 20.874418258666992 75.00394439697266 3
      vertex 20.874418258666992 75.00394439697266 0
      vertex 20.38196563720703 75.09788513183594 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 20.38196563720703 75.09788513183594 3
      vertex 20.874418258666992 75.00394439697266 0
      vertex 20.38196563720703 75.09788513183594 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 20.38196563720703 75.09788513183594 3
      vertex 20.38196563720703 75.09788513183594 0
      vertex 19.928346633911133 75.31134796142578 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 19.928346633911133 75.31134796142578 3
      vertex 20.38196563720703 75.09788513183594 0
      vertex 19.928346633911133 75.31134796142578 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 19.928346633911133 75.31134796142578 3
      vertex 19.928346633911133 75.31134796142578 0
      vertex 19.542062759399414 75.63090515136719 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 19.542062759399414 75.63090515136719 3
      vertex 19.928346633911133 75.31134796142578 0
      vertex 19.542062759399414 75.63090515136719 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 19.542062759399414 75.63090515136719 3
      vertex 19.542062759399414 75.63090515136719 0
      vertex 19.247386932373047 76.03649139404297 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 19.247386932373047 76.03649139404297 3
      vertex 19.542062759399414 75.63090515136719 0
      vertex 19.247386932373047 76.03649139404297 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 19.247386932373047 76.03649139404297 3
      vertex 19.247386932373047 76.03649139404297 0
      vertex 19.062833786010742 76.50261688232422 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 19.062833786010742 76.50261688232422 3
      vertex 19.247386932373047 76.03649139404297 0
      vertex 19.062833786010742 76.50261688232422 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 33.7852668762207 51.002620697021484 3
      vertex 33.7852668762207 51.002620697021484 0
      vertex 33.72243118286133 51.5 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 33.72243118286133 51.5 3
      vertex 33.7852668762207 51.002620697021484 0
      vertex 33.72243118286133 51.5 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 33.72243118286133 51.5 3
      vertex 33.72243118286133 51.5 0
      vertex 33.7852668762207 51.997379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 33.7852668762207 51.997379302978516 3
      vertex 33.72243118286133 51.5 0
      vertex 33.7852668762207 51.997379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 33.7852668762207 51.997379302978516 3
      vertex 33.7852668762207 51.997379302978516 0
      vertex 33.969818115234375 52.46350860595703 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 33.969818115234375 52.46350860595703 3
      vertex 33.7852668762207 51.997379302978516 0
      vertex 33.969818115234375 52.46350860595703 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 33.969818115234375 52.46350860595703 3
      vertex 33.969818115234375 52.46350860595703 0
      vertex 34.264495849609375 52.86909484863281 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 34.264495849609375 52.86909484863281 3
      vertex 33.969818115234375 52.46350860595703 0
      vertex 34.264495849609375 52.86909484863281 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 34.264495849609375 52.86909484863281 3
      vertex 34.264495849609375 52.86909484863281 0
      vertex 34.650779724121094 53.188655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 34.650779724121094 53.188655853271484 3
      vertex 34.264495849609375 52.86909484863281 0
      vertex 34.650779724121094 53.188655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 34.650779724121094 53.188655853271484 3
      vertex 34.650779724121094 53.188655853271484 0
      vertex 35.10439682006836 53.40211486816406 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 35.10439682006836 53.40211486816406 3
      vertex 34.650779724121094 53.188655853271484 0
      vertex 35.10439682006836 53.40211486816406 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 35.10439682006836 53.40211486816406 3
      vertex 35.10439682006836 53.40211486816406 0
      vertex 35.59685134887695 53.49605178833008 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 35.59685134887695 53.49605178833008 3
      vertex 35.10439682006836 53.40211486816406 0
      vertex 35.59685134887695 53.49605178833008 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 35.59685134887695 53.49605178833008 3
      vertex 35.59685134887695 53.49605178833008 0
      vertex 36.09719467163086 53.46457290649414 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 36.09719467163086 53.46457290649414 3
      vertex 35.59685134887695 53.49605178833008 0
      vertex 36.09719467163086 53.46457290649414 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 36.09719467163086 53.46457290649414 3
      vertex 36.09719467163086 53.46457290649414 0
      vertex 36.57398986816406 53.309654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 36.57398986816406 53.309654235839844 3
      vertex 36.09719467163086 53.46457290649414 0
      vertex 36.57398986816406 53.309654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 36.57398986816406 53.309654235839844 3
      vertex 36.57398986816406 53.309654235839844 0
      vertex 36.99728012084961 53.0410270690918 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 36.99728012084961 53.0410270690918 3
      vertex 36.57398986816406 53.309654235839844 0
      vertex 36.99728012084961 53.0410270690918 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 36.99728012084961 53.0410270690918 3
      vertex 36.99728012084961 53.0410270690918 0
      vertex 37.3404655456543 52.67557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 37.3404655456543 52.67557144165039 3
      vertex 36.99728012084961 53.0410270690918 0
      vertex 37.3404655456543 52.67557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 37.3404655456543 52.67557144165039 3
      vertex 37.3404655456543 52.67557144165039 0
      vertex 37.58198547363281 52.23624801635742 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 37.58198547363281 52.23624801635742 3
      vertex 37.3404655456543 52.67557144165039 0
      vertex 37.58198547363281 52.23624801635742 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 37.58198547363281 52.23624801635742 3
      vertex 37.58198547363281 52.23624801635742 0
      vertex 37.706661224365234 51.750667572021484 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 37.706661224365234 51.750667572021484 3
      vertex 37.58198547363281 52.23624801635742 0
      vertex 37.706661224365234 51.750667572021484 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 37.706661224365234 51.750667572021484 3
      vertex 37.706661224365234 51.750667572021484 0
      vertex 37.706661224365234 51.249332427978516 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 37.706661224365234 51.249332427978516 3
      vertex 37.706661224365234 51.750667572021484 0
      vertex 37.706661224365234 51.249332427978516 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 37.706661224365234 51.249332427978516 3
      vertex 37.706661224365234 51.249332427978516 0
      vertex 37.58198547363281 50.76375198364258 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 37.58198547363281 50.76375198364258 3
      vertex 37.706661224365234 51.249332427978516 0
      vertex 37.58198547363281 50.76375198364258 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 37.58198547363281 50.76375198364258 3
      vertex 37.58198547363281 50.76375198364258 0
      vertex 37.3404655456543 50.32442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 37.3404655456543 50.32442855834961 3
      vertex 37.58198547363281 50.76375198364258 0
      vertex 37.3404655456543 50.32442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 37.3404655456543 50.32442855834961 3
      vertex 37.3404655456543 50.32442855834961 0
      vertex 36.99728012084961 49.9589729309082 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 36.99728012084961 49.9589729309082 3
      vertex 37.3404655456543 50.32442855834961 0
      vertex 36.99728012084961 49.9589729309082 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 36.99728012084961 49.9589729309082 3
      vertex 36.99728012084961 49.9589729309082 0
      vertex 36.57398986816406 49.690345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 36.57398986816406 49.690345764160156 3
      vertex 36.99728012084961 49.9589729309082 0
      vertex 36.57398986816406 49.690345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 36.57398986816406 49.690345764160156 3
      vertex 36.57398986816406 49.690345764160156 0
      vertex 36.09719467163086 49.53542709350586 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 36.09719467163086 49.53542709350586 3
      vertex 36.57398986816406 49.690345764160156 0
      vertex 36.09719467163086 49.53542709350586 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 36.09719467163086 49.53542709350586 3
      vertex 36.09719467163086 49.53542709350586 0
      vertex 35.59685134887695 49.50394821166992 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 35.59685134887695 49.50394821166992 3
      vertex 36.09719467163086 49.53542709350586 0
      vertex 35.59685134887695 49.50394821166992 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 35.59685134887695 49.50394821166992 3
      vertex 35.59685134887695 49.50394821166992 0
      vertex 35.10439682006836 49.59788513183594 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 35.10439682006836 49.59788513183594 3
      vertex 35.59685134887695 49.50394821166992 0
      vertex 35.10439682006836 49.59788513183594 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 35.10439682006836 49.59788513183594 3
      vertex 35.10439682006836 49.59788513183594 0
      vertex 34.650779724121094 49.811344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 34.650779724121094 49.811344146728516 3
      vertex 35.10439682006836 49.59788513183594 0
      vertex 34.650779724121094 49.811344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 34.650779724121094 49.811344146728516 3
      vertex 34.650779724121094 49.811344146728516 0
      vertex 34.264495849609375 50.13090515136719 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 34.264495849609375 50.13090515136719 3
      vertex 34.650779724121094 49.811344146728516 0
      vertex 34.264495849609375 50.13090515136719 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 34.264495849609375 50.13090515136719 3
      vertex 34.264495849609375 50.13090515136719 0
      vertex 33.969818115234375 50.53649139404297 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 33.969818115234375 50.53649139404297 3
      vertex 34.264495849609375 50.13090515136719 0
      vertex 33.969818115234375 50.53649139404297 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 33.969818115234375 50.53649139404297 3
      vertex 33.969818115234375 50.53649139404297 0
      vertex 33.7852668762207 51.002620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 33.7852668762207 51.002620697021484 3
      vertex 33.969818115234375 50.53649139404297 0
      vertex 33.7852668762207 51.002620697021484 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 4.340401649475098 51.002620697021484 3
      vertex 4.340401649475098 51.002620697021484 0
      vertex 4.277568340301514 51.5 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex 4.277568340301514 51.5 3
      vertex 4.340401649475098 51.002620697021484 0
      vertex 4.277568340301514 51.5 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 4.277568340301514 51.5 3
      vertex 4.277568340301514 51.5 0
      vertex 4.340401649475098 51.997379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex 4.340401649475098 51.997379302978516 3
      vertex 4.277568340301514 51.5 0
      vertex 4.340401649475098 51.997379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 4.340401649475098 51.997379302978516 3
      vertex 4.340401649475098 51.997379302978516 0
      vertex 4.524954795837402 52.46350860595703 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex 4.524954795837402 52.46350860595703 3
      vertex 4.340401649475098 51.997379302978516 0
      vertex 4.524954795837402 52.46350860595703 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 4.524954795837402 52.46350860595703 3
      vertex 4.524954795837402 52.46350860595703 0
      vertex 4.819631099700928 52.86909484863281 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex 4.819631099700928 52.86909484863281 3
      vertex 4.524954795837402 52.46350860595703 0
      vertex 4.819631099700928 52.86909484863281 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 4.819631099700928 52.86909484863281 3
      vertex 4.819631099700928 52.86909484863281 0
      vertex 5.205914497375488 53.188655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex 5.205914497375488 53.188655853271484 3
      vertex 4.819631099700928 52.86909484863281 0
      vertex 5.205914497375488 53.188655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 5.205914497375488 53.188655853271484 3
      vertex 5.205914497375488 53.188655853271484 0
      vertex 5.659533977508545 53.40211486816406 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex 5.659533977508545 53.40211486816406 3
      vertex 5.205914497375488 53.188655853271484 0
      vertex 5.659533977508545 53.40211486816406 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 5.659533977508545 53.40211486816406 3
      vertex 5.659533977508545 53.40211486816406 0
      vertex 6.151987075805664 53.49605178833008 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex 6.151987075805664 53.49605178833008 3
      vertex 5.659533977508545 53.40211486816406 0
      vertex 6.151987075805664 53.49605178833008 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 6.151987075805664 53.49605178833008 3
      vertex 6.151987075805664 53.49605178833008 0
      vertex 6.6523308753967285 53.46457290649414 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex 6.6523308753967285 53.46457290649414 3
      vertex 6.151987075805664 53.49605178833008 0
      vertex 6.6523308753967285 53.46457290649414 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 6.6523308753967285 53.46457290649414 3
      vertex 6.6523308753967285 53.46457290649414 0
      vertex 7.12912654876709 53.309654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex 7.12912654876709 53.309654235839844 3
      vertex 6.6523308753967285 53.46457290649414 0
      vertex 7.12912654876709 53.309654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 7.12912654876709 53.309654235839844 3
      vertex 7.12912654876709 53.309654235839844 0
      vertex 7.5524163246154785 53.0410270690918 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex 7.5524163246154785 53.0410270690918 3
      vertex 7.12912654876709 53.309654235839844 0
      vertex 7.5524163246154785 53.0410270690918 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 7.5524163246154785 53.0410270690918 3
      vertex 7.5524163246154785 53.0410270690918 0
      vertex 7.895602226257324 52.67557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex 7.895602226257324 52.67557144165039 3
      vertex 7.5524163246154785 53.0410270690918 0
      vertex 7.895602226257324 52.67557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 7.895602226257324 52.67557144165039 3
      vertex 7.895602226257324 52.67557144165039 0
      vertex 8.137121200561523 52.23624801635742 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex 8.137121200561523 52.23624801635742 3
      vertex 7.895602226257324 52.67557144165039 0
      vertex 8.137121200561523 52.23624801635742 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 8.137121200561523 52.23624801635742 3
      vertex 8.137121200561523 52.23624801635742 0
      vertex 8.261797904968262 51.750667572021484 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex 8.261797904968262 51.750667572021484 3
      vertex 8.137121200561523 52.23624801635742 0
      vertex 8.261797904968262 51.750667572021484 0
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 8.261797904968262 51.750667572021484 3
      vertex 8.261797904968262 51.750667572021484 0
      vertex 8.261797904968262 51.249332427978516 3
    endloop
  endfacet
  facet normal -1 0 0
    outer loop
      vertex 8.261797904968262 51.249332427978516 3
      vertex 8.261797904968262 51.750667572021484 0
      vertex 8.261797904968262 51.249332427978516 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 8.261797904968262 51.249332427978516 3
      vertex 8.261797904968262 51.249332427978516 0
      vertex 8.137121200561523 50.76375198364258 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex 8.137121200561523 50.76375198364258 3
      vertex 8.261797904968262 51.249332427978516 0
      vertex 8.137121200561523 50.76375198364258 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 8.137121200561523 50.76375198364258 3
      vertex 8.137121200561523 50.76375198364258 0
      vertex 7.895602226257324 50.32442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex 7.895602226257324 50.32442855834961 3
      vertex 8.137121200561523 50.76375198364258 0
      vertex 7.895602226257324 50.32442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 7.895602226257324 50.32442855834961 3
      vertex 7.895602226257324 50.32442855834961 0
      vertex 7.5524163246154785 49.9589729309082 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex 7.5524163246154785 49.9589729309082 3
      vertex 7.895602226257324 50.32442855834961 0
      vertex 7.5524163246154785 49.9589729309082 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 7.5524163246154785 49.9589729309082 3
      vertex 7.5524163246154785 49.9589729309082 0
      vertex 7.12912654876709 49.690345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex 7.12912654876709 49.690345764160156 3
      vertex 7.5524163246154785 49.9589729309082 0
      vertex 7.12912654876709 49.690345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 7.12912654876709 49.690345764160156 3
      vertex 7.12912654876709 49.690345764160156 0
      vertex 6.6523308753967285 49.53542709350586 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex 6.6523308753967285 49.53542709350586 3
      vertex 7.12912654876709 49.690345764160156 0
      vertex 6.6523308753967285 49.53542709350586 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 6.6523308753967285 49.53542709350586 3
      vertex 6.6523308753967285 49.53542709350586 0
      vertex 6.151987075805664 49.50394821166992 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex 6.151987075805664 49.50394821166992 3
      vertex 6.6523308753967285 49.53542709350586 0
      vertex 6.151987075805664 49.50394821166992 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 6.151987075805664 49.50394821166992 3
      vertex 6.151987075805664 49.50394821166992 0
      vertex 5.659533977508545 49.59788513183594 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex 5.659533977508545 49.59788513183594 3
      vertex 6.151987075805664 49.50394821166992 0
      vertex 5.659533977508545 49.59788513183594 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 5.659533977508545 49.59788513183594 3
      vertex 5.659533977508545 49.59788513183594 0
      vertex 5.205914497375488 49.811344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex 5.205914497375488 49.811344146728516 3
      vertex 5.659533977508545 49.59788513183594 0
      vertex 5.205914497375488 49.811344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 5.205914497375488 49.811344146728516 3
      vertex 5.205914497375488 49.811344146728516 0
      vertex 4.819631099700928 50.13090515136719 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex 4.819631099700928 50.13090515136719 3
      vertex 5.205914497375488 49.811344146728516 0
      vertex 4.819631099700928 50.13090515136719 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 4.819631099700928 50.13090515136719 3
      vertex 4.819631099700928 50.13090515136719 0
      vertex 4.524954795837402 50.53649139404297 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex 4.524954795837402 50.53649139404297 3
      vertex 4.819631099700928 50.13090515136719 0
      vertex 4.524954795837402 50.53649139404297 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 4.524954795837402 50.53649139404297 3
      vertex 4.524954795837402 50.53649139404297 0
      vertex 4.340401649475098 51.002620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex 4.340401649475098 51.002620697021484 3
      vertex 4.524954795837402 50.53649139404297 0
      vertex 4.340401649475098 51.002620697021484 0
    endloop
  endfacet
  facet normal 0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 10.064482688903809 58.810691833496094 3
      vertex 10.064482688903809 58.810691833496094 0
      vertex 10 60 3
    endloop
  endfacet
  facet normal 0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 10 60 3
      vertex 10.064482688903809 58.810691833496094 0
      vertex 10 60 0
    endloop
  endfacet
  facet normal 0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 10 60 3
      vertex 10 60 0
      vertex 10.064482688903809 61.189308166503906 3
    endloop
  endfacet
  facet normal 0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 10.064482688903809 61.189308166503906 3
      vertex 10 60 0
      vertex 10.064482688903809 61.189308166503906 0
    endloop
  endfacet
  facet normal 0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 10.064482688903809 61.189308166503906 3
      vertex 10.064482688903809 61.189308166503906 0
      vertex 10.257173538208008 62.36467361450195 3
    endloop
  endfacet
  facet normal 0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 10.257173538208008 62.36467361450195 3
      vertex 10.064482688903809 61.189308166503906 0
      vertex 10.257173538208008 62.36467361450195 0
    endloop
  endfacet
  facet normal 0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 10.257173538208008 62.36467361450195 3
      vertex 10.257173538208008 62.36467361450195 0
      vertex 10.575815200805664 63.5123176574707 3
    endloop
  endfacet
  facet normal 0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 10.575815200805664 63.5123176574707 3
      vertex 10.257173538208008 62.36467361450195 0
      vertex 10.575815200805664 63.5123176574707 0
    endloop
  endfacet
  facet normal 0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 10.575815200805664 63.5123176574707 3
      vertex 10.575815200805664 63.5123176574707 0
      vertex 11.016670227050781 64.61878204345703 3
    endloop
  endfacet
  facet normal 0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 11.016670227050781 64.61878204345703 3
      vertex 10.575815200805664 63.5123176574707 0
      vertex 11.016670227050781 64.61878204345703 0
    endloop
  endfacet
  facet normal 0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 11.016670227050781 64.61878204345703 3
      vertex 11.016670227050781 64.61878204345703 0
      vertex 11.574570655822754 65.67108917236328 3
    endloop
  endfacet
  facet normal 0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 11.574570655822754 65.67108917236328 3
      vertex 11.016670227050781 64.61878204345703 0
      vertex 11.574570655822754 65.67108917236328 0
    endloop
  endfacet
  facet normal 0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 11.574570655822754 65.67108917236328 3
      vertex 11.574570655822754 65.67108917236328 0
      vertex 12.242976188659668 66.65691375732422 3
    endloop
  endfacet
  facet normal 0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 12.242976188659668 66.65691375732422 3
      vertex 11.574570655822754 65.67108917236328 0
      vertex 12.242976188659668 66.65691375732422 0
    endloop
  endfacet
  facet normal 0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 12.242976188659668 66.65691375732422 3
      vertex 12.242976188659668 66.65691375732422 0
      vertex 13.014049530029297 67.564697265625 3
    endloop
  endfacet
  facet normal 0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 13.014049530029297 67.564697265625 3
      vertex 12.242976188659668 66.65691375732422 0
      vertex 13.014049530029297 67.564697265625 0
    endloop
  endfacet
  facet normal 0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 13.014049530029297 67.564697265625 3
      vertex 13.014049530029297 67.564697265625 0
      vertex 13.878750801086426 68.38378143310547 3
    endloop
  endfacet
  facet normal 0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 13.878750801086426 68.38378143310547 3
      vertex 13.014049530029297 67.564697265625 0
      vertex 13.878750801086426 68.38378143310547 0
    endloop
  endfacet
  facet normal 0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 13.878750801086426 68.38378143310547 3
      vertex 13.878750801086426 68.38378143310547 0
      vertex 14.826942443847656 69.10457611083984 3
    endloop
  endfacet
  facet normal 0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 14.826942443847656 69.10457611083984 3
      vertex 13.878750801086426 68.38378143310547 0
      vertex 14.826942443847656 69.10457611083984 0
    endloop
  endfacet
  facet normal 0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 14.826942443847656 69.10457611083984 3
      vertex 14.826942443847656 69.10457611083984 0
      vertex 15.84750747680664 69.71863555908203 3
    endloop
  endfacet
  facet normal 0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 15.84750747680664 69.71863555908203 3
      vertex 14.826942443847656 69.10457611083984 0
      vertex 15.84750747680664 69.71863555908203 0
    endloop
  endfacet
  facet normal 0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 15.84750747680664 69.71863555908203 3
      vertex 15.84750747680664 69.71863555908203 0
      vertex 16.92848014831543 70.21874237060547 3
    endloop
  endfacet
  facet normal 0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 16.92848014831543 70.21874237060547 3
      vertex 15.84750747680664 69.71863555908203 0
      vertex 16.92848014831543 70.21874237060547 0
    endloop
  endfacet
  facet normal 0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 16.92848014831543 70.21874237060547 3
      vertex 16.92848014831543 70.21874237060547 0
      vertex 18.057188034057617 70.59905242919922 3
    endloop
  endfacet
  facet normal 0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 18.057188034057617 70.59905242919922 3
      vertex 16.92848014831543 70.21874237060547 0
      vertex 18.057188034057617 70.59905242919922 0
    endloop
  endfacet
  facet normal 0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 18.057188034057617 70.59905242919922 3
      vertex 18.057188034057617 70.59905242919922 0
      vertex 19.22039794921875 70.85509490966797 3
    endloop
  endfacet
  facet normal 0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 19.22039794921875 70.85509490966797 3
      vertex 18.057188034057617 70.59905242919922 0
      vertex 19.22039794921875 70.85509490966797 0
    endloop
  endfacet
  facet normal 0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 19.22039794921875 70.85509490966797 3
      vertex 19.22039794921875 70.85509490966797 0
      vertex 20.40447235107422 70.9838638305664 3
    endloop
  endfacet
  facet normal 0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 20.40447235107422 70.9838638305664 3
      vertex 19.22039794921875 70.85509490966797 0
      vertex 20.40447235107422 70.9838638305664 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 20.40447235107422 70.9838638305664 3
      vertex 20.40447235107422 70.9838638305664 0
      vertex 21.59552764892578 70.9838638305664 3
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 21.59552764892578 70.9838638305664 3
      vertex 20.40447235107422 70.9838638305664 0
      vertex 21.59552764892578 70.9838638305664 0
    endloop
  endfacet
  facet normal -0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 21.59552764892578 70.9838638305664 3
      vertex 21.59552764892578 70.9838638305664 0
      vertex 22.77960205078125 70.85509490966797 3
    endloop
  endfacet
  facet normal -0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 22.77960205078125 70.85509490966797 3
      vertex 21.59552764892578 70.9838638305664 0
      vertex 22.77960205078125 70.85509490966797 0
    endloop
  endfacet
  facet normal -0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 22.77960205078125 70.85509490966797 3
      vertex 22.77960205078125 70.85509490966797 0
      vertex 23.942811965942383 70.59905242919922 3
    endloop
  endfacet
  facet normal -0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 23.942811965942383 70.59905242919922 3
      vertex 22.77960205078125 70.85509490966797 0
      vertex 23.942811965942383 70.59905242919922 0
    endloop
  endfacet
  facet normal -0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 23.942811965942383 70.59905242919922 3
      vertex 23.942811965942383 70.59905242919922 0
      vertex 25.07151985168457 70.21874237060547 3
    endloop
  endfacet
  facet normal -0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 25.07151985168457 70.21874237060547 3
      vertex 23.942811965942383 70.59905242919922 0
      vertex 25.07151985168457 70.21874237060547 0
    endloop
  endfacet
  facet normal -0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 25.07151985168457 70.21874237060547 3
      vertex 25.07151985168457 70.21874237060547 0
      vertex 26.15249252319336 69.71863555908203 3
    endloop
  endfacet
  facet normal -0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 26.15249252319336 69.71863555908203 3
      vertex 25.07151985168457 70.21874237060547 0
      vertex 26.15249252319336 69.71863555908203 0
    endloop
  endfacet
  facet normal -0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 26.15249252319336 69.71863555908203 3
      vertex 26.15249252319336 69.71863555908203 0
      vertex 27.173057556152344 69.10457611083984 3
    endloop
  endfacet
  facet normal -0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 27.173057556152344 69.10457611083984 3
      vertex 26.15249252319336 69.71863555908203 0
      vertex 27.173057556152344 69.10457611083984 0
    endloop
  endfacet
  facet normal -0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 27.173057556152344 69.10457611083984 3
      vertex 27.173057556152344 69.10457611083984 0
      vertex 28.121248245239258 68.38378143310547 3
    endloop
  endfacet
  facet normal -0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 28.121248245239258 68.38378143310547 3
      vertex 27.173057556152344 69.10457611083984 0
      vertex 28.121248245239258 68.38378143310547 0
    endloop
  endfacet
  facet normal -0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 28.121248245239258 68.38378143310547 3
      vertex 28.121248245239258 68.38378143310547 0
      vertex 28.985950469970703 67.564697265625 3
    endloop
  endfacet
  facet normal -0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 28.985950469970703 67.564697265625 3
      vertex 28.121248245239258 68.38378143310547 0
      vertex 28.985950469970703 67.564697265625 0
    endloop
  endfacet
  facet normal -0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 28.985950469970703 67.564697265625 3
      vertex 28.985950469970703 67.564697265625 0
      vertex 29.757022857666016 66.65691375732422 3
    endloop
  endfacet
  facet normal -0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 29.757022857666016 66.65691375732422 3
      vertex 28.985950469970703 67.564697265625 0
      vertex 29.757022857666016 66.65691375732422 0
    endloop
  endfacet
  facet normal -0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 29.757022857666016 66.65691375732422 3
      vertex 29.757022857666016 66.65691375732422 0
      vertex 30.42542839050293 65.67108917236328 3
    endloop
  endfacet
  facet normal -0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 30.42542839050293 65.67108917236328 3
      vertex 29.757022857666016 66.65691375732422 0
      vertex 30.42542839050293 65.67108917236328 0
    endloop
  endfacet
  facet normal -0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 30.42542839050293 65.67108917236328 3
      vertex 30.42542839050293 65.67108917236328 0
      vertex 30.98332977294922 64.61878204345703 3
    endloop
  endfacet
  facet normal -0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 30.98332977294922 64.61878204345703 3
      vertex 30.42542839050293 65.67108917236328 0
      vertex 30.98332977294922 64.61878204345703 0
    endloop
  endfacet
  facet normal -0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 30.98332977294922 64.61878204345703 3
      vertex 30.98332977294922 64.61878204345703 0
      vertex 31.424184799194336 63.5123176574707 3
    endloop
  endfacet
  facet normal -0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 31.424184799194336 63.5123176574707 3
      vertex 30.98332977294922 64.61878204345703 0
      vertex 31.424184799194336 63.5123176574707 0
    endloop
  endfacet
  facet normal -0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 31.424184799194336 63.5123176574707 3
      vertex 31.424184799194336 63.5123176574707 0
      vertex 31.742826461791992 62.36467361450195 3
    endloop
  endfacet
  facet normal -0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 31.742826461791992 62.36467361450195 3
      vertex 31.424184799194336 63.5123176574707 0
      vertex 31.742826461791992 62.36467361450195 0
    endloop
  endfacet
  facet normal -0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 31.742826461791992 62.36467361450195 3
      vertex 31.742826461791992 62.36467361450195 0
      vertex 31.935518264770508 61.189308166503906 3
    endloop
  endfacet
  facet normal -0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 31.935518264770508 61.189308166503906 3
      vertex 31.742826461791992 62.36467361450195 0
      vertex 31.935518264770508 61.189308166503906 0
    endloop
  endfacet
  facet normal -0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 31.935518264770508 61.189308166503906 3
      vertex 31.935518264770508 61.189308166503906 0
      vertex 32 60 3
    endloop
  endfacet
  facet normal -0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 32 60 3
      vertex 31.935518264770508 61.189308166503906 0
      vertex 32 60 0
    endloop
  endfacet
  facet normal -0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 32 60 3
      vertex 32 60 0
      vertex 31.935518264770508 58.810691833496094 3
    endloop
  endfacet
  facet normal -0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 31.935518264770508 58.810691833496094 3
      vertex 32 60 0
      vertex 31.935518264770508 58.810691833496094 0
    endloop
  endfacet
  facet normal -0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 31.935518264770508 58.810691833496094 3
      vertex 31.935518264770508 58.810691833496094 0
      vertex 31.742826461791992 57.63532638549805 3
    endloop
  endfacet
  facet normal -0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 31.742826461791992 57.63532638549805 3
      vertex 31.935518264770508 58.810691833496094 0
      vertex 31.742826461791992 57.63532638549805 0
    endloop
  endfacet
  facet normal -0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 31.742826461791992 57.63532638549805 3
      vertex 31.742826461791992 57.63532638549805 0
      vertex 31.424184799194336 56.4876823425293 3
    endloop
  endfacet
  facet normal -0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 31.424184799194336 56.4876823425293 3
      vertex 31.742826461791992 57.63532638549805 0
      vertex 31.424184799194336 56.4876823425293 0
    endloop
  endfacet
  facet normal -0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 31.424184799194336 56.4876823425293 3
      vertex 31.424184799194336 56.4876823425293 0
      vertex 30.98332977294922 55.381221771240234 3
    endloop
  endfacet
  facet normal -0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 30.98332977294922 55.381221771240234 3
      vertex 31.424184799194336 56.4876823425293 0
      vertex 30.98332977294922 55.381221771240234 0
    endloop
  endfacet
  facet normal -0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 30.98332977294922 55.381221771240234 3
      vertex 30.98332977294922 55.381221771240234 0
      vertex 30.42542839050293 54.32890701293945 3
    endloop
  endfacet
  facet normal -0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 30.42542839050293 54.32890701293945 3
      vertex 30.98332977294922 55.381221771240234 0
      vertex 30.42542839050293 54.32890701293945 0
    endloop
  endfacet
  facet normal -0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 30.42542839050293 54.32890701293945 3
      vertex 30.42542839050293 54.32890701293945 0
      vertex 29.757022857666016 53.343082427978516 3
    endloop
  endfacet
  facet normal -0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 29.757022857666016 53.343082427978516 3
      vertex 30.42542839050293 54.32890701293945 0
      vertex 29.757022857666016 53.343082427978516 0
    endloop
  endfacet
  facet normal -0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 29.757022857666016 53.343082427978516 3
      vertex 29.757022857666016 53.343082427978516 0
      vertex 28.985950469970703 52.435306549072266 3
    endloop
  endfacet
  facet normal -0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 28.985950469970703 52.435306549072266 3
      vertex 29.757022857666016 53.343082427978516 0
      vertex 28.985950469970703 52.435306549072266 0
    endloop
  endfacet
  facet normal -0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 28.985950469970703 52.435306549072266 3
      vertex 28.985950469970703 52.435306549072266 0
      vertex 28.121248245239258 51.61621856689453 3
    endloop
  endfacet
  facet normal -0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 28.121248245239258 51.61621856689453 3
      vertex 28.985950469970703 52.435306549072266 0
      vertex 28.121248245239258 51.61621856689453 0
    endloop
  endfacet
  facet normal -0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 28.121248245239258 51.61621856689453 3
      vertex 28.121248245239258 51.61621856689453 0
      vertex 27.173057556152344 50.89542007446289 3
    endloop
  endfacet
  facet normal -0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 27.173057556152344 50.89542007446289 3
      vertex 28.121248245239258 51.61621856689453 0
      vertex 27.173057556152344 50.89542007446289 0
    endloop
  endfacet
  facet normal -0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 27.173057556152344 50.89542007446289 3
      vertex 27.173057556152344 50.89542007446289 0
      vertex 26.15249252319336 50.281368255615234 3
    endloop
  endfacet
  facet normal -0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 26.15249252319336 50.281368255615234 3
      vertex 27.173057556152344 50.89542007446289 0
      vertex 26.15249252319336 50.281368255615234 0
    endloop
  endfacet
  facet normal -0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 26.15249252319336 50.281368255615234 3
      vertex 26.15249252319336 50.281368255615234 0
      vertex 25.07151985168457 49.78125762939453 3
    endloop
  endfacet
  facet normal -0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 25.07151985168457 49.78125762939453 3
      vertex 26.15249252319336 50.281368255615234 0
      vertex 25.07151985168457 49.78125762939453 0
    endloop
  endfacet
  facet normal -0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 25.07151985168457 49.78125762939453 3
      vertex 25.07151985168457 49.78125762939453 0
      vertex 23.942811965942383 49.40095138549805 3
    endloop
  endfacet
  facet normal -0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 23.942811965942383 49.40095138549805 3
      vertex 25.07151985168457 49.78125762939453 0
      vertex 23.942811965942383 49.40095138549805 0
    endloop
  endfacet
  facet normal -0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 23.942811965942383 49.40095138549805 3
      vertex 23.942811965942383 49.40095138549805 0
      vertex 22.77960205078125 49.1449089050293 3
    endloop
  endfacet
  facet normal -0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 22.77960205078125 49.1449089050293 3
      vertex 23.942811965942383 49.40095138549805 0
      vertex 22.77960205078125 49.1449089050293 0
    endloop
  endfacet
  facet normal -0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 22.77960205078125 49.1449089050293 3
      vertex 22.77960205078125 49.1449089050293 0
      vertex 21.59552764892578 49.01613235473633 3
    endloop
  endfacet
  facet normal -0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 21.59552764892578 49.01613235473633 3
      vertex 22.77960205078125 49.1449089050293 0
      vertex 21.59552764892578 49.01613235473633 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 21.59552764892578 49.01613235473633 3
      vertex 21.59552764892578 49.01613235473633 0
      vertex 20.40447235107422 49.01613235473633 3
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 20.40447235107422 49.01613235473633 3
      vertex 21.59552764892578 49.01613235473633 0
      vertex 20.40447235107422 49.01613235473633 0
    endloop
  endfacet
  facet normal 0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 20.40447235107422 49.01613235473633 3
      vertex 20.40447235107422 49.01613235473633 0
      vertex 19.22039794921875 49.1449089050293 3
    endloop
  endfacet
  facet normal 0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 19.22039794921875 49.1449089050293 3
      vertex 20.40447235107422 49.01613235473633 0
      vertex 19.22039794921875 49.1449089050293 0
    endloop
  endfacet
  facet normal 0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 19.22039794921875 49.1449089050293 3
      vertex 19.22039794921875 49.1449089050293 0
      vertex 18.057188034057617 49.40095138549805 3
    endloop
  endfacet
  facet normal 0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 18.057188034057617 49.40095138549805 3
      vertex 19.22039794921875 49.1449089050293 0
      vertex 18.057188034057617 49.40095138549805 0
    endloop
  endfacet
  facet normal 0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 18.057188034057617 49.40095138549805 3
      vertex 18.057188034057617 49.40095138549805 0
      vertex 16.92848014831543 49.78125762939453 3
    endloop
  endfacet
  facet normal 0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 16.92848014831543 49.78125762939453 3
      vertex 18.057188034057617 49.40095138549805 0
      vertex 16.92848014831543 49.78125762939453 0
    endloop
  endfacet
  facet normal 0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 16.92848014831543 49.78125762939453 3
      vertex 16.92848014831543 49.78125762939453 0
      vertex 15.84750747680664 50.281368255615234 3
    endloop
  endfacet
  facet normal 0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 15.84750747680664 50.281368255615234 3
      vertex 16.92848014831543 49.78125762939453 0
      vertex 15.84750747680664 50.281368255615234 0
    endloop
  endfacet
  facet normal 0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 15.84750747680664 50.281368255615234 3
      vertex 15.84750747680664 50.281368255615234 0
      vertex 14.826942443847656 50.89542007446289 3
    endloop
  endfacet
  facet normal 0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 14.826942443847656 50.89542007446289 3
      vertex 15.84750747680664 50.281368255615234 0
      vertex 14.826942443847656 50.89542007446289 0
    endloop
  endfacet
  facet normal 0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 14.826942443847656 50.89542007446289 3
      vertex 14.826942443847656 50.89542007446289 0
      vertex 13.878750801086426 51.61621856689453 3
    endloop
  endfacet
  facet normal 0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 13.878750801086426 51.61621856689453 3
      vertex 14.826942443847656 50.89542007446289 0
      vertex 13.878750801086426 51.61621856689453 0
    endloop
  endfacet
  facet normal 0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 13.878750801086426 51.61621856689453 3
      vertex 13.878750801086426 51.61621856689453 0
      vertex 13.014049530029297 52.435306549072266 3
    endloop
  endfacet
  facet normal 0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 13.014049530029297 52.435306549072266 3
      vertex 13.878750801086426 51.61621856689453 0
      vertex 13.014049530029297 52.435306549072266 0
    endloop
  endfacet
  facet normal 0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 13.014049530029297 52.435306549072266 3
      vertex 13.014049530029297 52.435306549072266 0
      vertex 12.242976188659668 53.343082427978516 3
    endloop
  endfacet
  facet normal 0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 12.242976188659668 53.343082427978516 3
      vertex 13.014049530029297 52.435306549072266 0
      vertex 12.242976188659668 53.343082427978516 0
    endloop
  endfacet
  facet normal 0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 12.242976188659668 53.343082427978516 3
      vertex 12.242976188659668 53.343082427978516 0
      vertex 11.574570655822754 54.32890701293945 3
    endloop
  endfacet
  facet normal 0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 11.574570655822754 54.32890701293945 3
      vertex 12.242976188659668 53.343082427978516 0
      vertex 11.574570655822754 54.32890701293945 0
    endloop
  endfacet
  facet normal 0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 11.574570655822754 54.32890701293945 3
      vertex 11.574570655822754 54.32890701293945 0
      vertex 11.016670227050781 55.381221771240234 3
    endloop
  endfacet
  facet normal 0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 11.016670227050781 55.381221771240234 3
      vertex 11.574570655822754 54.32890701293945 0
      vertex 11.016670227050781 55.381221771240234 0
    endloop
  endfacet
  facet normal 0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 11.016670227050781 55.381221771240234 3
      vertex 11.016670227050781 55.381221771240234 0
      vertex 10.575815200805664 56.4876823425293 3
    endloop
  endfacet
  facet normal 0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 10.575815200805664 56.4876823425293 3
      vertex 11.016670227050781 55.381221771240234 0
      vertex 10.575815200805664 56.4876823425293 0
    endloop
  endfacet
  facet normal 0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 10.575815200805664 56.4876823425293 3
      vertex 10.575815200805664 56.4876823425293 0
      vertex 10.257173538208008 57.63532638549805 3
    endloop
  endfacet
  facet normal 0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 10.257173538208008 57.63532638549805 3
      vertex 10.575815200805664 56.4876823425293 0
      vertex 10.257173538208008 57.63532638549805 0
    endloop
  endfacet
  facet normal 0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 10.257173538208008 57.63532638549805 3
      vertex 10.257173538208008 57.63532638549805 0
      vertex 10.064482688903809 58.810691833496094 3
    endloop
  endfacet
  facet normal 0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 10.064482688903809 58.810691833496094 3
      vertex 10.257173538208008 57.63532638549805 0
      vertex 10.064482688903809 58.810691833496094 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex -6.937166213989258 61.502620697021484 3
      vertex -6.937166213989258 61.502620697021484 0
      vertex -7 62 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex -7 62 3
      vertex -6.937166213989258 61.502620697021484 0
      vertex -7 62 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex -7 62 3
      vertex -7 62 0
      vertex -6.937166213989258 62.497379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex -6.937166213989258 62.497379302978516 3
      vertex -7 62 0
      vertex -6.937166213989258 62.497379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex -6.937166213989258 62.497379302978516 3
      vertex -6.937166213989258 62.497379302978516 0
      vertex -6.752613544464111 62.96350860595703 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex -6.752613544464111 62.96350860595703 3
      vertex -6.937166213989258 62.497379302978516 0
      vertex -6.752613544464111 62.96350860595703 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex -6.752613544464111 62.96350860595703 3
      vertex -6.752613544464111 62.96350860595703 0
      vertex -6.457937240600586 63.36909484863281 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex -6.457937240600586 63.36909484863281 3
      vertex -6.752613544464111 62.96350860595703 0
      vertex -6.457937240600586 63.36909484863281 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex -6.457937240600586 63.36909484863281 3
      vertex -6.457937240600586 63.36909484863281 0
      vertex -6.071653366088867 63.688655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex -6.071653366088867 63.688655853271484 3
      vertex -6.457937240600586 63.36909484863281 0
      vertex -6.071653366088867 63.688655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex -6.071653366088867 63.688655853271484 3
      vertex -6.071653366088867 63.688655853271484 0
      vertex -5.6180338859558105 63.90211486816406 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex -5.6180338859558105 63.90211486816406 3
      vertex -6.071653366088867 63.688655853271484 0
      vertex -5.6180338859558105 63.90211486816406 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex -5.6180338859558105 63.90211486816406 3
      vertex -5.6180338859558105 63.90211486816406 0
      vertex -5.12558126449585 63.99605178833008 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex -5.12558126449585 63.99605178833008 3
      vertex -5.6180338859558105 63.90211486816406 0
      vertex -5.12558126449585 63.99605178833008 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex -5.12558126449585 63.99605178833008 3
      vertex -5.12558126449585 63.99605178833008 0
      vertex -4.625237464904785 63.96457290649414 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex -4.625237464904785 63.96457290649414 3
      vertex -5.12558126449585 63.99605178833008 0
      vertex -4.625237464904785 63.96457290649414 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex -4.625237464904785 63.96457290649414 3
      vertex -4.625237464904785 63.96457290649414 0
      vertex -4.148441314697266 63.809654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex -4.148441314697266 63.809654235839844 3
      vertex -4.625237464904785 63.96457290649414 0
      vertex -4.148441314697266 63.809654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex -4.148441314697266 63.809654235839844 3
      vertex -4.148441314697266 63.809654235839844 0
      vertex -3.725152015686035 63.5410270690918 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex -3.725152015686035 63.5410270690918 3
      vertex -4.148441314697266 63.809654235839844 0
      vertex -3.725152015686035 63.5410270690918 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex -3.725152015686035 63.5410270690918 3
      vertex -3.725152015686035 63.5410270690918 0
      vertex -3.3819661140441895 63.17557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex -3.3819661140441895 63.17557144165039 3
      vertex -3.725152015686035 63.5410270690918 0
      vertex -3.3819661140441895 63.17557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex -3.3819661140441895 63.17557144165039 3
      vertex -3.3819661140441895 63.17557144165039 0
      vertex -3.1404471397399902 62.73624801635742 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex -3.1404471397399902 62.73624801635742 3
      vertex -3.3819661140441895 63.17557144165039 0
      vertex -3.1404471397399902 62.73624801635742 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex -3.1404471397399902 62.73624801635742 3
      vertex -3.1404471397399902 62.73624801635742 0
      vertex -3.015770673751831 62.250667572021484 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex -3.015770673751831 62.250667572021484 3
      vertex -3.1404471397399902 62.73624801635742 0
      vertex -3.015770673751831 62.250667572021484 0
    endloop
  endfacet
  facet normal -1 8.858169447827394e-16 0
    outer loop
      vertex -3.015770673751831 62.250667572021484 3
      vertex -3.015770673751831 62.250667572021484 0
      vertex -3.015770673751831 61.749332427978516 3
    endloop
  endfacet
  facet normal -1 8.858169447827394e-16 0
    outer loop
      vertex -3.015770673751831 61.749332427978516 3
      vertex -3.015770673751831 62.250667572021484 0
      vertex -3.015770673751831 61.749332427978516 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex -3.015770673751831 61.749332427978516 3
      vertex -3.015770673751831 61.749332427978516 0
      vertex -3.1404471397399902 61.26375198364258 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex -3.1404471397399902 61.26375198364258 3
      vertex -3.015770673751831 61.749332427978516 0
      vertex -3.1404471397399902 61.26375198364258 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex -3.1404471397399902 61.26375198364258 3
      vertex -3.1404471397399902 61.26375198364258 0
      vertex -3.3819661140441895 60.82442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex -3.3819661140441895 60.82442855834961 3
      vertex -3.1404471397399902 61.26375198364258 0
      vertex -3.3819661140441895 60.82442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex -3.3819661140441895 60.82442855834961 3
      vertex -3.3819661140441895 60.82442855834961 0
      vertex -3.725152015686035 60.4589729309082 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex -3.725152015686035 60.4589729309082 3
      vertex -3.3819661140441895 60.82442855834961 0
      vertex -3.725152015686035 60.4589729309082 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex -3.725152015686035 60.4589729309082 3
      vertex -3.725152015686035 60.4589729309082 0
      vertex -4.148441314697266 60.190345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex -4.148441314697266 60.190345764160156 3
      vertex -3.725152015686035 60.4589729309082 0
      vertex -4.148441314697266 60.190345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex -4.148441314697266 60.190345764160156 3
      vertex -4.148441314697266 60.190345764160156 0
      vertex -4.625237464904785 60.03542709350586 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex -4.625237464904785 60.03542709350586 3
      vertex -4.148441314697266 60.190345764160156 0
      vertex -4.625237464904785 60.03542709350586 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex -4.625237464904785 60.03542709350586 3
      vertex -4.625237464904785 60.03542709350586 0
      vertex -5.12558126449585 60.00394821166992 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex -5.12558126449585 60.00394821166992 3
      vertex -4.625237464904785 60.03542709350586 0
      vertex -5.12558126449585 60.00394821166992 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex -5.12558126449585 60.00394821166992 3
      vertex -5.12558126449585 60.00394821166992 0
      vertex -5.6180338859558105 60.09788513183594 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex -5.6180338859558105 60.09788513183594 3
      vertex -5.12558126449585 60.00394821166992 0
      vertex -5.6180338859558105 60.09788513183594 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex -5.6180338859558105 60.09788513183594 3
      vertex -5.6180338859558105 60.09788513183594 0
      vertex -6.071653366088867 60.311344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex -6.071653366088867 60.311344146728516 3
      vertex -5.6180338859558105 60.09788513183594 0
      vertex -6.071653366088867 60.311344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex -6.071653366088867 60.311344146728516 3
      vertex -6.071653366088867 60.311344146728516 0
      vertex -6.457937240600586 60.63090515136719 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex -6.457937240600586 60.63090515136719 3
      vertex -6.071653366088867 60.311344146728516 0
      vertex -6.457937240600586 60.63090515136719 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex -6.457937240600586 60.63090515136719 3
      vertex -6.457937240600586 60.63090515136719 0
      vertex -6.752613544464111 61.03649139404297 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex -6.752613544464111 61.03649139404297 3
      vertex -6.457937240600586 60.63090515136719 0
      vertex -6.752613544464111 61.03649139404297 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex -6.752613544464111 61.03649139404297 3
      vertex -6.752613544464111 61.03649139404297 0
      vertex -6.937166213989258 61.502620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex -6.937166213989258 61.502620697021484 3
      vertex -6.752613544464111 61.03649139404297 0
      vertex -6.937166213989258 61.502620697021484 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 34.7925910949707 4.676476001739502 3
      vertex 34.7925910949707 4.676476001739502 0
      vertex 34.75 5 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 34.75 5 3
      vertex 34.7925910949707 4.676476001739502 0
      vertex 34.75 5 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 34.75 5 3
      vertex 34.75 5 0
      vertex 34.7925910949707 5.323523998260498 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 34.7925910949707 5.323523998260498 3
      vertex 34.75 5 0
      vertex 34.7925910949707 5.323523998260498 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 34.7925910949707 5.323523998260498 3
      vertex 34.7925910949707 5.323523998260498 0
      vertex 34.9174690246582 5.625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 34.9174690246582 5.625 3
      vertex 34.7925910949707 5.323523998260498 0
      vertex 34.9174690246582 5.625 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 34.9174690246582 5.625 3
      vertex 34.9174690246582 5.625 0
      vertex 35.11611557006836 5.883883476257324 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 35.11611557006836 5.883883476257324 3
      vertex 34.9174690246582 5.625 0
      vertex 35.11611557006836 5.883883476257324 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 35.11611557006836 5.883883476257324 3
      vertex 35.11611557006836 5.883883476257324 0
      vertex 35.375 6.082531929016113 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 35.375 6.082531929016113 3
      vertex 35.11611557006836 5.883883476257324 0
      vertex 35.375 6.082531929016113 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 35.375 6.082531929016113 3
      vertex 35.375 6.082531929016113 0
      vertex 35.676475524902344 6.207407474517822 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 35.676475524902344 6.207407474517822 3
      vertex 35.375 6.082531929016113 0
      vertex 35.676475524902344 6.207407474517822 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 35.676475524902344 6.207407474517822 3
      vertex 35.676475524902344 6.207407474517822 0
      vertex 36 6.25 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36 6.25 3
      vertex 35.676475524902344 6.207407474517822 0
      vertex 36 6.25 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36 6.25 3
      vertex 36 6.25 0
      vertex 36.323524475097656 6.207407474517822 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36.323524475097656 6.207407474517822 3
      vertex 36 6.25 0
      vertex 36.323524475097656 6.207407474517822 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 36.323524475097656 6.207407474517822 3
      vertex 36.323524475097656 6.207407474517822 0
      vertex 36.625 6.082531929016113 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 36.625 6.082531929016113 3
      vertex 36.323524475097656 6.207407474517822 0
      vertex 36.625 6.082531929016113 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 36.625 6.082531929016113 3
      vertex 36.625 6.082531929016113 0
      vertex 36.88388442993164 5.883883476257324 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 36.88388442993164 5.883883476257324 3
      vertex 36.625 6.082531929016113 0
      vertex 36.88388442993164 5.883883476257324 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 36.88388442993164 5.883883476257324 3
      vertex 36.88388442993164 5.883883476257324 0
      vertex 37.0825309753418 5.625 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 37.0825309753418 5.625 3
      vertex 36.88388442993164 5.883883476257324 0
      vertex 37.0825309753418 5.625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 37.0825309753418 5.625 3
      vertex 37.0825309753418 5.625 0
      vertex 37.2074089050293 5.323523998260498 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 37.2074089050293 5.323523998260498 3
      vertex 37.0825309753418 5.625 0
      vertex 37.2074089050293 5.323523998260498 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 37.2074089050293 5.323523998260498 3
      vertex 37.2074089050293 5.323523998260498 0
      vertex 37.25 5 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 37.25 5 3
      vertex 37.2074089050293 5.323523998260498 0
      vertex 37.25 5 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 37.25 5 3
      vertex 37.25 5 0
      vertex 37.2074089050293 4.676476001739502 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 37.2074089050293 4.676476001739502 3
      vertex 37.25 5 0
      vertex 37.2074089050293 4.676476001739502 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 37.2074089050293 4.676476001739502 3
      vertex 37.2074089050293 4.676476001739502 0
      vertex 37.0825309753418 4.375 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 37.0825309753418 4.375 3
      vertex 37.2074089050293 4.676476001739502 0
      vertex 37.0825309753418 4.375 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 37.0825309753418 4.375 3
      vertex 37.0825309753418 4.375 0
      vertex 36.88388442993164 4.116116523742676 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 36.88388442993164 4.116116523742676 3
      vertex 37.0825309753418 4.375 0
      vertex 36.88388442993164 4.116116523742676 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 36.88388442993164 4.116116523742676 3
      vertex 36.88388442993164 4.116116523742676 0
      vertex 36.625 3.917468309402466 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 36.625 3.917468309402466 3
      vertex 36.88388442993164 4.116116523742676 0
      vertex 36.625 3.917468309402466 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 36.625 3.917468309402466 3
      vertex 36.625 3.917468309402466 0
      vertex 36.323524475097656 3.792592763900757 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 36.323524475097656 3.792592763900757 3
      vertex 36.625 3.917468309402466 0
      vertex 36.323524475097656 3.792592763900757 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36.323524475097656 3.792592763900757 3
      vertex 36.323524475097656 3.792592763900757 0
      vertex 36 3.75 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36 3.75 3
      vertex 36.323524475097656 3.792592763900757 0
      vertex 36 3.75 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36 3.75 3
      vertex 36 3.75 0
      vertex 35.676475524902344 3.792592763900757 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 35.676475524902344 3.792592763900757 3
      vertex 36 3.75 0
      vertex 35.676475524902344 3.792592763900757 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 35.676475524902344 3.792592763900757 3
      vertex 35.676475524902344 3.792592763900757 0
      vertex 35.375 3.917468309402466 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 35.375 3.917468309402466 3
      vertex 35.676475524902344 3.792592763900757 0
      vertex 35.375 3.917468309402466 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 35.375 3.917468309402466 3
      vertex 35.375 3.917468309402466 0
      vertex 35.11611557006836 4.116116523742676 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 35.11611557006836 4.116116523742676 3
      vertex 35.375 3.917468309402466 0
      vertex 35.11611557006836 4.116116523742676 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 35.11611557006836 4.116116523742676 3
      vertex 35.11611557006836 4.116116523742676 0
      vertex 34.9174690246582 4.375 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 34.9174690246582 4.375 3
      vertex 35.11611557006836 4.116116523742676 0
      vertex 34.9174690246582 4.375 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 34.9174690246582 4.375 3
      vertex 34.9174690246582 4.375 0
      vertex 34.7925910949707 4.676476001739502 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 34.7925910949707 4.676476001739502 3
      vertex 34.9174690246582 4.375 0
      vertex 34.7925910949707 4.676476001739502 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 34.7925910949707 34.676475524902344 3
      vertex 34.7925910949707 34.676475524902344 0
      vertex 34.75 35 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 34.75 35 3
      vertex 34.7925910949707 34.676475524902344 0
      vertex 34.75 35 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 34.75 35 3
      vertex 34.75 35 0
      vertex 34.7925910949707 35.323524475097656 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 34.7925910949707 35.323524475097656 3
      vertex 34.75 35 0
      vertex 34.7925910949707 35.323524475097656 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 34.7925910949707 35.323524475097656 3
      vertex 34.7925910949707 35.323524475097656 0
      vertex 34.9174690246582 35.625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 34.9174690246582 35.625 3
      vertex 34.7925910949707 35.323524475097656 0
      vertex 34.9174690246582 35.625 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 34.9174690246582 35.625 3
      vertex 34.9174690246582 35.625 0
      vertex 35.11611557006836 35.88388442993164 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 35.11611557006836 35.88388442993164 3
      vertex 34.9174690246582 35.625 0
      vertex 35.11611557006836 35.88388442993164 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 35.11611557006836 35.88388442993164 3
      vertex 35.11611557006836 35.88388442993164 0
      vertex 35.375 36.0825309753418 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 35.375 36.0825309753418 3
      vertex 35.11611557006836 35.88388442993164 0
      vertex 35.375 36.0825309753418 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 35.375 36.0825309753418 3
      vertex 35.375 36.0825309753418 0
      vertex 35.676475524902344 36.2074089050293 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 35.676475524902344 36.2074089050293 3
      vertex 35.375 36.0825309753418 0
      vertex 35.676475524902344 36.2074089050293 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 35.676475524902344 36.2074089050293 3
      vertex 35.676475524902344 36.2074089050293 0
      vertex 36 36.25 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36 36.25 3
      vertex 35.676475524902344 36.2074089050293 0
      vertex 36 36.25 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36 36.25 3
      vertex 36 36.25 0
      vertex 36.323524475097656 36.2074089050293 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 36.323524475097656 36.2074089050293 3
      vertex 36 36.25 0
      vertex 36.323524475097656 36.2074089050293 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 36.323524475097656 36.2074089050293 3
      vertex 36.323524475097656 36.2074089050293 0
      vertex 36.625 36.0825309753418 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 36.625 36.0825309753418 3
      vertex 36.323524475097656 36.2074089050293 0
      vertex 36.625 36.0825309753418 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 36.625 36.0825309753418 3
      vertex 36.625 36.0825309753418 0
      vertex 36.88388442993164 35.88388442993164 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 36.88388442993164 35.88388442993164 3
      vertex 36.625 36.0825309753418 0
      vertex 36.88388442993164 35.88388442993164 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 36.88388442993164 35.88388442993164 3
      vertex 36.88388442993164 35.88388442993164 0
      vertex 37.0825309753418 35.625 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 37.0825309753418 35.625 3
      vertex 36.88388442993164 35.88388442993164 0
      vertex 37.0825309753418 35.625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 37.0825309753418 35.625 3
      vertex 37.0825309753418 35.625 0
      vertex 37.2074089050293 35.323524475097656 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 37.2074089050293 35.323524475097656 3
      vertex 37.0825309753418 35.625 0
      vertex 37.2074089050293 35.323524475097656 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 37.2074089050293 35.323524475097656 3
      vertex 37.2074089050293 35.323524475097656 0
      vertex 37.25 35 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 37.25 35 3
      vertex 37.2074089050293 35.323524475097656 0
      vertex 37.25 35 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 37.25 35 3
      vertex 37.25 35 0
      vertex 37.2074089050293 34.676475524902344 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 37.2074089050293 34.676475524902344 3
      vertex 37.25 35 0
      vertex 37.2074089050293 34.676475524902344 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 37.2074089050293 34.676475524902344 3
      vertex 37.2074089050293 34.676475524902344 0
      vertex 37.0825309753418 34.375 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 37.0825309753418 34.375 3
      vertex 37.2074089050293 34.676475524902344 0
      vertex 37.0825309753418 34.375 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 37.0825309753418 34.375 3
      vertex 37.0825309753418 34.375 0
      vertex 36.88388442993164 34.11611557006836 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 36.88388442993164 34.11611557006836 3
      vertex 37.0825309753418 34.375 0
      vertex 36.88388442993164 34.11611557006836 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 36.88388442993164 34.11611557006836 3
      vertex 36.88388442993164 34.11611557006836 0
      vertex 36.625 33.9174690246582 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 36.625 33.9174690246582 3
      vertex 36.88388442993164 34.11611557006836 0
      vertex 36.625 33.9174690246582 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 36.625 33.9174690246582 3
      vertex 36.625 33.9174690246582 0
      vertex 36.323524475097656 33.7925910949707 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 36.323524475097656 33.7925910949707 3
      vertex 36.625 33.9174690246582 0
      vertex 36.323524475097656 33.7925910949707 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36.323524475097656 33.7925910949707 3
      vertex 36.323524475097656 33.7925910949707 0
      vertex 36 33.75 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36 33.75 3
      vertex 36.323524475097656 33.7925910949707 0
      vertex 36 33.75 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 36 33.75 3
      vertex 36 33.75 0
      vertex 35.676475524902344 33.7925910949707 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 35.676475524902344 33.7925910949707 3
      vertex 36 33.75 0
      vertex 35.676475524902344 33.7925910949707 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 35.676475524902344 33.7925910949707 3
      vertex 35.676475524902344 33.7925910949707 0
      vertex 35.375 33.9174690246582 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 35.375 33.9174690246582 3
      vertex 35.676475524902344 33.7925910949707 0
      vertex 35.375 33.9174690246582 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 35.375 33.9174690246582 3
      vertex 35.375 33.9174690246582 0
      vertex 35.11611557006836 34.11611557006836 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 35.11611557006836 34.11611557006836 3
      vertex 35.375 33.9174690246582 0
      vertex 35.11611557006836 34.11611557006836 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 35.11611557006836 34.11611557006836 3
      vertex 35.11611557006836 34.11611557006836 0
      vertex 34.9174690246582 34.375 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 34.9174690246582 34.375 3
      vertex 35.11611557006836 34.11611557006836 0
      vertex 34.9174690246582 34.375 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 34.9174690246582 34.375 3
      vertex 34.9174690246582 34.375 0
      vertex 34.7925910949707 34.676475524902344 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 34.7925910949707 34.676475524902344 3
      vertex 34.9174690246582 34.375 0
      vertex 34.7925910949707 34.676475524902344 0
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex -6.937166213989258 21.502620697021484 3
      vertex -6.937166213989258 21.502620697021484 0
      vertex -7 22 3
    endloop
  endfacet
  facet normal 0.9921147227287292 0.12533323466777802 0
    outer loop
      vertex -7 22 3
      vertex -6.937166213989258 21.502620697021484 0
      vertex -7 22 0
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex -7 22 3
      vertex -7 22 0
      vertex -6.937166213989258 22.497379302978516 3
    endloop
  endfacet
  facet normal 0.9921147227287292 -0.12533323466777802 0
    outer loop
      vertex -6.937166213989258 22.497379302978516 3
      vertex -7 22 0
      vertex -6.937166213989258 22.497379302978516 0
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex -6.937166213989258 22.497379302978516 3
      vertex -6.937166213989258 22.497379302978516 0
      vertex -6.752613544464111 22.9635066986084 3
    endloop
  endfacet
  facet normal 0.9297764897346497 -0.3681245446205139 0
    outer loop
      vertex -6.752613544464111 22.9635066986084 3
      vertex -6.937166213989258 22.497379302978516 0
      vertex -6.752613544464111 22.9635066986084 0
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex -6.752613544464111 22.9635066986084 3
      vertex -6.752613544464111 22.9635066986084 0
      vertex -6.457937240600586 23.369094848632812 3
    endloop
  endfacet
  facet normal 0.80901700258255 -0.5877852439880371 0
    outer loop
      vertex -6.457937240600586 23.369094848632812 3
      vertex -6.752613544464111 22.9635066986084 0
      vertex -6.457937240600586 23.369094848632812 0
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex -6.457937240600586 23.369094848632812 3
      vertex -6.457937240600586 23.369094848632812 0
      vertex -6.071653366088867 23.688655853271484 3
    endloop
  endfacet
  facet normal 0.6374239921569824 -0.7705132365226746 0
    outer loop
      vertex -6.071653366088867 23.688655853271484 3
      vertex -6.457937240600586 23.369094848632812 0
      vertex -6.071653366088867 23.688655853271484 0
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex -6.071653366088867 23.688655853271484 3
      vertex -6.071653366088867 23.688655853271484 0
      vertex -5.6180338859558105 23.90211296081543 3
    endloop
  endfacet
  facet normal 0.4257792830467224 -0.9048270583152771 0
    outer loop
      vertex -5.6180338859558105 23.90211296081543 3
      vertex -6.071653366088867 23.688655853271484 0
      vertex -5.6180338859558105 23.90211296081543 0
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex -5.6180338859558105 23.90211296081543 3
      vertex -5.6180338859558105 23.90211296081543 0
      vertex -5.12558126449585 23.99605369567871 3
    endloop
  endfacet
  facet normal 0.187381312251091 -0.9822872281074524 0
    outer loop
      vertex -5.12558126449585 23.99605369567871 3
      vertex -5.6180338859558105 23.90211296081543 0
      vertex -5.12558126449585 23.99605369567871 0
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex -5.12558126449585 23.99605369567871 3
      vertex -5.12558126449585 23.99605369567871 0
      vertex -4.625237464904785 23.964574813842773 3
    endloop
  endfacet
  facet normal -0.06279052048921585 -0.9980267286300659 0
    outer loop
      vertex -4.625237464904785 23.964574813842773 3
      vertex -5.12558126449585 23.99605369567871 0
      vertex -4.625237464904785 23.964574813842773 0
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex -4.625237464904785 23.964574813842773 3
      vertex -4.625237464904785 23.964574813842773 0
      vertex -4.148441314697266 23.809654235839844 3
    endloop
  endfacet
  facet normal -0.30901700258255005 -0.9510565400123596 0
    outer loop
      vertex -4.148441314697266 23.809654235839844 3
      vertex -4.625237464904785 23.964574813842773 0
      vertex -4.148441314697266 23.809654235839844 0
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex -4.148441314697266 23.809654235839844 3
      vertex -4.148441314697266 23.809654235839844 0
      vertex -3.725152015686035 23.541027069091797 3
    endloop
  endfacet
  facet normal -0.5358268022537231 -0.8443279266357422 0
    outer loop
      vertex -3.725152015686035 23.541027069091797 3
      vertex -4.148441314697266 23.809654235839844 0
      vertex -3.725152015686035 23.541027069091797 0
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex -3.725152015686035 23.541027069091797 3
      vertex -3.725152015686035 23.541027069091797 0
      vertex -3.3819661140441895 23.17557144165039 3
    endloop
  endfacet
  facet normal -0.728968620300293 -0.6845471262931824 0
    outer loop
      vertex -3.3819661140441895 23.17557144165039 3
      vertex -3.725152015686035 23.541027069091797 0
      vertex -3.3819661140441895 23.17557144165039 0
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex -3.3819661140441895 23.17557144165039 3
      vertex -3.3819661140441895 23.17557144165039 0
      vertex -3.1404471397399902 22.736249923706055 3
    endloop
  endfacet
  facet normal -0.8763066530227661 -0.4817536771297455 0
    outer loop
      vertex -3.1404471397399902 22.736249923706055 3
      vertex -3.3819661140441895 23.17557144165039 0
      vertex -3.1404471397399902 22.736249923706055 0
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex -3.1404471397399902 22.736249923706055 3
      vertex -3.1404471397399902 22.736249923706055 0
      vertex -3.015770673751831 22.25066566467285 3
    endloop
  endfacet
  facet normal -0.9685831665992737 -0.24868988990783691 0
    outer loop
      vertex -3.015770673751831 22.25066566467285 3
      vertex -3.1404471397399902 22.736249923706055 0
      vertex -3.015770673751831 22.25066566467285 0
    endloop
  endfacet
  facet normal -1 8.858169447827394e-16 0
    outer loop
      vertex -3.015770673751831 22.25066566467285 3
      vertex -3.015770673751831 22.25066566467285 0
      vertex -3.015770673751831 21.74933433532715 3
    endloop
  endfacet
  facet normal -1 8.858169447827394e-16 0
    outer loop
      vertex -3.015770673751831 21.74933433532715 3
      vertex -3.015770673751831 22.25066566467285 0
      vertex -3.015770673751831 21.74933433532715 0
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex -3.015770673751831 21.74933433532715 3
      vertex -3.015770673751831 21.74933433532715 0
      vertex -3.1404471397399902 21.263750076293945 3
    endloop
  endfacet
  facet normal -0.9685831665992737 0.24868988990783691 0
    outer loop
      vertex -3.1404471397399902 21.263750076293945 3
      vertex -3.015770673751831 21.74933433532715 0
      vertex -3.1404471397399902 21.263750076293945 0
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex -3.1404471397399902 21.263750076293945 3
      vertex -3.1404471397399902 21.263750076293945 0
      vertex -3.3819661140441895 20.82442855834961 3
    endloop
  endfacet
  facet normal -0.8763066530227661 0.4817536771297455 0
    outer loop
      vertex -3.3819661140441895 20.82442855834961 3
      vertex -3.1404471397399902 21.263750076293945 0
      vertex -3.3819661140441895 20.82442855834961 0
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex -3.3819661140441895 20.82442855834961 3
      vertex -3.3819661140441895 20.82442855834961 0
      vertex -3.725152015686035 20.458972930908203 3
    endloop
  endfacet
  facet normal -0.728968620300293 0.6845471262931824 0
    outer loop
      vertex -3.725152015686035 20.458972930908203 3
      vertex -3.3819661140441895 20.82442855834961 0
      vertex -3.725152015686035 20.458972930908203 0
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex -3.725152015686035 20.458972930908203 3
      vertex -3.725152015686035 20.458972930908203 0
      vertex -4.148441314697266 20.190345764160156 3
    endloop
  endfacet
  facet normal -0.5358268022537231 0.8443279266357422 0
    outer loop
      vertex -4.148441314697266 20.190345764160156 3
      vertex -3.725152015686035 20.458972930908203 0
      vertex -4.148441314697266 20.190345764160156 0
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex -4.148441314697266 20.190345764160156 3
      vertex -4.148441314697266 20.190345764160156 0
      vertex -4.625237464904785 20.035425186157227 3
    endloop
  endfacet
  facet normal -0.30901700258255005 0.9510565400123596 0
    outer loop
      vertex -4.625237464904785 20.035425186157227 3
      vertex -4.148441314697266 20.190345764160156 0
      vertex -4.625237464904785 20.035425186157227 0
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex -4.625237464904785 20.035425186157227 3
      vertex -4.625237464904785 20.035425186157227 0
      vertex -5.12558126449585 20.00394630432129 3
    endloop
  endfacet
  facet normal -0.06279052048921585 0.9980267286300659 0
    outer loop
      vertex -5.12558126449585 20.00394630432129 3
      vertex -4.625237464904785 20.035425186157227 0
      vertex -5.12558126449585 20.00394630432129 0
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex -5.12558126449585 20.00394630432129 3
      vertex -5.12558126449585 20.00394630432129 0
      vertex -5.6180338859558105 20.09788703918457 3
    endloop
  endfacet
  facet normal 0.187381312251091 0.9822872281074524 0
    outer loop
      vertex -5.6180338859558105 20.09788703918457 3
      vertex -5.12558126449585 20.00394630432129 0
      vertex -5.6180338859558105 20.09788703918457 0
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex -5.6180338859558105 20.09788703918457 3
      vertex -5.6180338859558105 20.09788703918457 0
      vertex -6.071653366088867 20.311344146728516 3
    endloop
  endfacet
  facet normal 0.4257792830467224 0.9048270583152771 0
    outer loop
      vertex -6.071653366088867 20.311344146728516 3
      vertex -5.6180338859558105 20.09788703918457 0
      vertex -6.071653366088867 20.311344146728516 0
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex -6.071653366088867 20.311344146728516 3
      vertex -6.071653366088867 20.311344146728516 0
      vertex -6.457937240600586 20.630905151367188 3
    endloop
  endfacet
  facet normal 0.6374239921569824 0.7705132365226746 0
    outer loop
      vertex -6.457937240600586 20.630905151367188 3
      vertex -6.071653366088867 20.311344146728516 0
      vertex -6.457937240600586 20.630905151367188 0
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex -6.457937240600586 20.630905151367188 3
      vertex -6.457937240600586 20.630905151367188 0
      vertex -6.752613544464111 21.0364933013916 3
    endloop
  endfacet
  facet normal 0.80901700258255 0.5877852439880371 0
    outer loop
      vertex -6.752613544464111 21.0364933013916 3
      vertex -6.457937240600586 20.630905151367188 0
      vertex -6.752613544464111 21.0364933013916 0
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex -6.752613544464111 21.0364933013916 3
      vertex -6.752613544464111 21.0364933013916 0
      vertex -6.937166213989258 21.502620697021484 3
    endloop
  endfacet
  facet normal 0.9297764897346497 0.3681245446205139 0
    outer loop
      vertex -6.937166213989258 21.502620697021484 3
      vertex -6.752613544464111 21.0364933013916 0
      vertex -6.937166213989258 21.502620697021484 0
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 4.792592525482178 4.676476001739502 3
      vertex 4.792592525482178 4.676476001739502 0
      vertex 4.75 5 3
    endloop
  endfacet
  facet normal 0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 4.75 5 3
      vertex 4.792592525482178 4.676476001739502 0
      vertex 4.75 5 0
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 4.75 5 3
      vertex 4.75 5 0
      vertex 4.792592525482178 5.323523998260498 3
    endloop
  endfacet
  facet normal 0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 4.792592525482178 5.323523998260498 3
      vertex 4.75 5 0
      vertex 4.792592525482178 5.323523998260498 0
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 4.792592525482178 5.323523998260498 3
      vertex 4.792592525482178 5.323523998260498 0
      vertex 4.917468070983887 5.625 3
    endloop
  endfacet
  facet normal 0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 4.917468070983887 5.625 3
      vertex 4.792592525482178 5.323523998260498 0
      vertex 4.917468070983887 5.625 0
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 4.917468070983887 5.625 3
      vertex 4.917468070983887 5.625 0
      vertex 5.116116523742676 5.883883476257324 3
    endloop
  endfacet
  facet normal 0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 5.116116523742676 5.883883476257324 3
      vertex 4.917468070983887 5.625 0
      vertex 5.116116523742676 5.883883476257324 0
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 5.116116523742676 5.883883476257324 3
      vertex 5.116116523742676 5.883883476257324 0
      vertex 5.375 6.082531929016113 3
    endloop
  endfacet
  facet normal 0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 5.375 6.082531929016113 3
      vertex 5.116116523742676 5.883883476257324 0
      vertex 5.375 6.082531929016113 0
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 5.375 6.082531929016113 3
      vertex 5.375 6.082531929016113 0
      vertex 5.676476001739502 6.207407474517822 3
    endloop
  endfacet
  facet normal 0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 5.676476001739502 6.207407474517822 3
      vertex 5.375 6.082531929016113 0
      vertex 5.676476001739502 6.207407474517822 0
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 5.676476001739502 6.207407474517822 3
      vertex 5.676476001739502 6.207407474517822 0
      vertex 6 6.25 3
    endloop
  endfacet
  facet normal 0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6 6.25 3
      vertex 5.676476001739502 6.207407474517822 0
      vertex 6 6.25 0
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6 6.25 3
      vertex 6 6.25 0
      vertex 6.323523998260498 6.207407474517822 3
    endloop
  endfacet
  facet normal -0.13052618503570557 -0.9914448857307434 0
    outer loop
      vertex 6.323523998260498 6.207407474517822 3
      vertex 6 6.25 0
      vertex 6.323523998260498 6.207407474517822 0
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 6.323523998260498 6.207407474517822 3
      vertex 6.323523998260498 6.207407474517822 0
      vertex 6.625 6.082531929016113 3
    endloop
  endfacet
  facet normal -0.3826834261417389 -0.9238795042037964 0
    outer loop
      vertex 6.625 6.082531929016113 3
      vertex 6.323523998260498 6.207407474517822 0
      vertex 6.625 6.082531929016113 0
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 6.625 6.082531929016113 3
      vertex 6.625 6.082531929016113 0
      vertex 6.883883476257324 5.883883476257324 3
    endloop
  endfacet
  facet normal -0.6087614297866821 -0.7933533191680908 0
    outer loop
      vertex 6.883883476257324 5.883883476257324 3
      vertex 6.625 6.082531929016113 0
      vertex 6.883883476257324 5.883883476257324 0
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 6.883883476257324 5.883883476257324 3
      vertex 6.883883476257324 5.883883476257324 0
      vertex 7.082531929016113 5.625 3
    endloop
  endfacet
  facet normal -0.7933533191680908 -0.6087614297866821 0
    outer loop
      vertex 7.082531929016113 5.625 3
      vertex 6.883883476257324 5.883883476257324 0
      vertex 7.082531929016113 5.625 0
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 7.082531929016113 5.625 3
      vertex 7.082531929016113 5.625 0
      vertex 7.207407474517822 5.323523998260498 3
    endloop
  endfacet
  facet normal -0.9238795042037964 -0.3826834261417389 0
    outer loop
      vertex 7.207407474517822 5.323523998260498 3
      vertex 7.082531929016113 5.625 0
      vertex 7.207407474517822 5.323523998260498 0
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 7.207407474517822 5.323523998260498 3
      vertex 7.207407474517822 5.323523998260498 0
      vertex 7.25 5 3
    endloop
  endfacet
  facet normal -0.9914448857307434 -0.13052618503570557 0
    outer loop
      vertex 7.25 5 3
      vertex 7.207407474517822 5.323523998260498 0
      vertex 7.25 5 0
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 7.25 5 3
      vertex 7.25 5 0
      vertex 7.207407474517822 4.676476001739502 3
    endloop
  endfacet
  facet normal -0.9914448857307434 0.13052618503570557 0
    outer loop
      vertex 7.207407474517822 4.676476001739502 3
      vertex 7.25 5 0
      vertex 7.207407474517822 4.676476001739502 0
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 7.207407474517822 4.676476001739502 3
      vertex 7.207407474517822 4.676476001739502 0
      vertex 7.082531929016113 4.375 3
    endloop
  endfacet
  facet normal -0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 7.082531929016113 4.375 3
      vertex 7.207407474517822 4.676476001739502 0
      vertex 7.082531929016113 4.375 0
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 7.082531929016113 4.375 3
      vertex 7.082531929016113 4.375 0
      vertex 6.883883476257324 4.116116523742676 3
    endloop
  endfacet
  facet normal -0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 6.883883476257324 4.116116523742676 3
      vertex 7.082531929016113 4.375 0
      vertex 6.883883476257324 4.116116523742676 0
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 6.883883476257324 4.116116523742676 3
      vertex 6.883883476257324 4.116116523742676 0
      vertex 6.625 3.917468309402466 3
    endloop
  endfacet
  facet normal -0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 6.625 3.917468309402466 3
      vertex 6.883883476257324 4.116116523742676 0
      vertex 6.625 3.917468309402466 0
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 6.625 3.917468309402466 3
      vertex 6.625 3.917468309402466 0
      vertex 6.323523998260498 3.792592763900757 3
    endloop
  endfacet
  facet normal -0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 6.323523998260498 3.792592763900757 3
      vertex 6.625 3.917468309402466 0
      vertex 6.323523998260498 3.792592763900757 0
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6.323523998260498 3.792592763900757 3
      vertex 6.323523998260498 3.792592763900757 0
      vertex 6 3.75 3
    endloop
  endfacet
  facet normal -0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6 3.75 3
      vertex 6.323523998260498 3.792592763900757 0
      vertex 6 3.75 0
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 6 3.75 3
      vertex 6 3.75 0
      vertex 5.676476001739502 3.792592763900757 3
    endloop
  endfacet
  facet normal 0.13052618503570557 0.9914448857307434 0
    outer loop
      vertex 5.676476001739502 3.792592763900757 3
      vertex 6 3.75 0
      vertex 5.676476001739502 3.792592763900757 0
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 5.676476001739502 3.792592763900757 3
      vertex 5.676476001739502 3.792592763900757 0
      vertex 5.375 3.917468309402466 3
    endloop
  endfacet
  facet normal 0.3826834261417389 0.9238795042037964 0
    outer loop
      vertex 5.375 3.917468309402466 3
      vertex 5.676476001739502 3.792592763900757 0
      vertex 5.375 3.917468309402466 0
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 5.375 3.917468309402466 3
      vertex 5.375 3.917468309402466 0
      vertex 5.116116523742676 4.116116523742676 3
    endloop
  endfacet
  facet normal 0.6087614297866821 0.7933533191680908 0
    outer loop
      vertex 5.116116523742676 4.116116523742676 3
      vertex 5.375 3.917468309402466 0
      vertex 5.116116523742676 4.116116523742676 0
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 5.116116523742676 4.116116523742676 3
      vertex 5.116116523742676 4.116116523742676 0
      vertex 4.917468070983887 4.375 3
    endloop
  endfacet
  facet normal 0.7933533191680908 0.6087614297866821 0
    outer loop
      vertex 4.917468070983887 4.375 3
      vertex 5.116116523742676 4.116116523742676 0
      vertex 4.917468070983887 4.375 0
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 4.917468070983887 4.375 3
      vertex 4.917468070983887 4.375 0
      vertex 4.792592525482178 4.676476001739502 3
    endloop
  endfacet
  facet normal 0.9238795042037964 0.3826834261417389 0
    outer loop
      vertex 4.792592525482178 4.676476001739502 3
      vertex 4.917468070983887 4.375 0
      vertex 4.792592525482178 4.676476001739502 0
    endloop
  endfacet
  facet normal 0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 10.064482688903809 18.81068992614746 3
      vertex 10.064482688903809 18.81068992614746 0
      vertex 10 20 3
    endloop
  endfacet
  facet normal 0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 10 20 3
      vertex 10.064482688903809 18.81068992614746 0
      vertex 10 20 0
    endloop
  endfacet
  facet normal 0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 10 20 3
      vertex 10 20 0
      vertex 10.064482688903809 21.18931007385254 3
    endloop
  endfacet
  facet normal 0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 10.064482688903809 21.18931007385254 3
      vertex 10 20 0
      vertex 10.064482688903809 21.18931007385254 0
    endloop
  endfacet
  facet normal 0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 10.064482688903809 21.18931007385254 3
      vertex 10.064482688903809 21.18931007385254 0
      vertex 10.257173538208008 22.364675521850586 3
    endloop
  endfacet
  facet normal 0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 10.257173538208008 22.364675521850586 3
      vertex 10.064482688903809 21.18931007385254 0
      vertex 10.257173538208008 22.364675521850586 0
    endloop
  endfacet
  facet normal 0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 10.257173538208008 22.364675521850586 3
      vertex 10.257173538208008 22.364675521850586 0
      vertex 10.575815200805664 23.512317657470703 3
    endloop
  endfacet
  facet normal 0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 10.575815200805664 23.512317657470703 3
      vertex 10.257173538208008 22.364675521850586 0
      vertex 10.575815200805664 23.512317657470703 0
    endloop
  endfacet
  facet normal 0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 10.575815200805664 23.512317657470703 3
      vertex 10.575815200805664 23.512317657470703 0
      vertex 11.016670227050781 24.6187801361084 3
    endloop
  endfacet
  facet normal 0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 11.016670227050781 24.6187801361084 3
      vertex 10.575815200805664 23.512317657470703 0
      vertex 11.016670227050781 24.6187801361084 0
    endloop
  endfacet
  facet normal 0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 11.016670227050781 24.6187801361084 3
      vertex 11.016670227050781 24.6187801361084 0
      vertex 11.574570655822754 25.671092987060547 3
    endloop
  endfacet
  facet normal 0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 11.574570655822754 25.671092987060547 3
      vertex 11.016670227050781 24.6187801361084 0
      vertex 11.574570655822754 25.671092987060547 0
    endloop
  endfacet
  facet normal 0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 11.574570655822754 25.671092987060547 3
      vertex 11.574570655822754 25.671092987060547 0
      vertex 12.242976188659668 26.65691566467285 3
    endloop
  endfacet
  facet normal 0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 12.242976188659668 26.65691566467285 3
      vertex 11.574570655822754 25.671092987060547 0
      vertex 12.242976188659668 26.65691566467285 0
    endloop
  endfacet
  facet normal 0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 12.242976188659668 26.65691566467285 3
      vertex 12.242976188659668 26.65691566467285 0
      vertex 13.014049530029297 27.564693450927734 3
    endloop
  endfacet
  facet normal 0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 13.014049530029297 27.564693450927734 3
      vertex 12.242976188659668 26.65691566467285 0
      vertex 13.014049530029297 27.564693450927734 0
    endloop
  endfacet
  facet normal 0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 13.014049530029297 27.564693450927734 3
      vertex 13.014049530029297 27.564693450927734 0
      vertex 13.878750801086426 28.3837833404541 3
    endloop
  endfacet
  facet normal 0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 13.878750801086426 28.3837833404541 3
      vertex 13.014049530029297 27.564693450927734 0
      vertex 13.878750801086426 28.3837833404541 0
    endloop
  endfacet
  facet normal 0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 13.878750801086426 28.3837833404541 3
      vertex 13.878750801086426 28.3837833404541 0
      vertex 14.826942443847656 29.10457992553711 3
    endloop
  endfacet
  facet normal 0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 14.826942443847656 29.10457992553711 3
      vertex 13.878750801086426 28.3837833404541 0
      vertex 14.826942443847656 29.10457992553711 0
    endloop
  endfacet
  facet normal 0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 14.826942443847656 29.10457992553711 3
      vertex 14.826942443847656 29.10457992553711 0
      vertex 15.84750747680664 29.718631744384766 3
    endloop
  endfacet
  facet normal 0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 15.84750747680664 29.718631744384766 3
      vertex 14.826942443847656 29.10457992553711 0
      vertex 15.84750747680664 29.718631744384766 0
    endloop
  endfacet
  facet normal 0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 15.84750747680664 29.718631744384766 3
      vertex 15.84750747680664 29.718631744384766 0
      vertex 16.92848014831543 30.2187442779541 3
    endloop
  endfacet
  facet normal 0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 16.92848014831543 30.2187442779541 3
      vertex 15.84750747680664 29.718631744384766 0
      vertex 16.92848014831543 30.2187442779541 0
    endloop
  endfacet
  facet normal 0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 16.92848014831543 30.2187442779541 3
      vertex 16.92848014831543 30.2187442779541 0
      vertex 18.057188034057617 30.599050521850586 3
    endloop
  endfacet
  facet normal 0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 18.057188034057617 30.599050521850586 3
      vertex 16.92848014831543 30.2187442779541 0
      vertex 18.057188034057617 30.599050521850586 0
    endloop
  endfacet
  facet normal 0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 18.057188034057617 30.599050521850586 3
      vertex 18.057188034057617 30.599050521850586 0
      vertex 19.22039794921875 30.855091094970703 3
    endloop
  endfacet
  facet normal 0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 19.22039794921875 30.855091094970703 3
      vertex 18.057188034057617 30.599050521850586 0
      vertex 19.22039794921875 30.855091094970703 0
    endloop
  endfacet
  facet normal 0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 19.22039794921875 30.855091094970703 3
      vertex 19.22039794921875 30.855091094970703 0
      vertex 20.40447235107422 30.983867645263672 3
    endloop
  endfacet
  facet normal 0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 20.40447235107422 30.983867645263672 3
      vertex 19.22039794921875 30.855091094970703 0
      vertex 20.40447235107422 30.983867645263672 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 20.40447235107422 30.983867645263672 3
      vertex 20.40447235107422 30.983867645263672 0
      vertex 21.59552764892578 30.983867645263672 3
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 21.59552764892578 30.983867645263672 3
      vertex 20.40447235107422 30.983867645263672 0
      vertex 21.59552764892578 30.983867645263672 0
    endloop
  endfacet
  facet normal -0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 21.59552764892578 30.983867645263672 3
      vertex 21.59552764892578 30.983867645263672 0
      vertex 22.77960205078125 30.855091094970703 3
    endloop
  endfacet
  facet normal -0.10811901837587357 -0.9941379427909851 0
    outer loop
      vertex 22.77960205078125 30.855091094970703 3
      vertex 21.59552764892578 30.983867645263672 0
      vertex 22.77960205078125 30.855091094970703 0
    endloop
  endfacet
  facet normal -0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 22.77960205078125 30.855091094970703 3
      vertex 22.77960205078125 30.855091094970703 0
      vertex 23.942811965942383 30.599050521850586 3
    endloop
  endfacet
  facet normal -0.2149704396724701 -0.9766205549240112 0
    outer loop
      vertex 23.942811965942383 30.599050521850586 3
      vertex 22.77960205078125 30.855091094970703 0
      vertex 23.942811965942383 30.599050521850586 0
    endloop
  endfacet
  facet normal -0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 23.942811965942383 30.599050521850586 3
      vertex 23.942811965942383 30.599050521850586 0
      vertex 25.07151985168457 30.2187442779541 3
    endloop
  endfacet
  facet normal -0.3193015158176422 -0.9476531744003296 0
    outer loop
      vertex 25.07151985168457 30.2187442779541 3
      vertex 23.942811965942383 30.599050521850586 0
      vertex 25.07151985168457 30.2187442779541 0
    endloop
  endfacet
  facet normal -0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 25.07151985168457 30.2187442779541 3
      vertex 25.07151985168457 30.2187442779541 0
      vertex 26.15249252319336 29.718631744384766 3
    endloop
  endfacet
  facet normal -0.41988909244537354 -0.9075754284858704 0
    outer loop
      vertex 26.15249252319336 29.718631744384766 3
      vertex 25.07151985168457 30.2187442779541 0
      vertex 26.15249252319336 29.718631744384766 0
    endloop
  endfacet
  facet normal -0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 26.15249252319336 29.718631744384766 3
      vertex 26.15249252319336 29.718631744384766 0
      vertex 27.173057556152344 29.10457992553711 3
    endloop
  endfacet
  facet normal -0.5155538320541382 -0.856857180595398 0
    outer loop
      vertex 27.173057556152344 29.10457992553711 3
      vertex 26.15249252319336 29.718631744384766 0
      vertex 27.173057556152344 29.10457992553711 0
    endloop
  endfacet
  facet normal -0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 27.173057556152344 29.10457992553711 3
      vertex 27.173057556152344 29.10457992553711 0
      vertex 28.121248245239258 28.3837833404541 3
    endloop
  endfacet
  facet normal -0.6051742434501648 -0.7960930466651917 0
    outer loop
      vertex 28.121248245239258 28.3837833404541 3
      vertex 27.173057556152344 29.10457992553711 0
      vertex 28.121248245239258 28.3837833404541 0
    endloop
  endfacet
  facet normal -0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 28.121248245239258 28.3837833404541 3
      vertex 28.121248245239258 28.3837833404541 0
      vertex 28.985950469970703 27.564693450927734 3
    endloop
  endfacet
  facet normal -0.6876994371414185 -0.7259954810142517 0
    outer loop
      vertex 28.985950469970703 27.564693450927734 3
      vertex 28.121248245239258 28.3837833404541 0
      vertex 28.985950469970703 27.564693450927734 0
    endloop
  endfacet
  facet normal -0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 28.985950469970703 27.564693450927734 3
      vertex 28.985950469970703 27.564693450927734 0
      vertex 29.757022857666016 26.65691566467285 3
    endloop
  endfacet
  facet normal -0.7621620297431946 -0.6473863124847412 0
    outer loop
      vertex 29.757022857666016 26.65691566467285 3
      vertex 28.985950469970703 27.564693450927734 0
      vertex 29.757022857666016 26.65691566467285 0
    endloop
  endfacet
  facet normal -0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 29.757022857666016 26.65691566467285 3
      vertex 29.757022857666016 26.65691566467285 0
      vertex 30.42542839050293 25.671092987060547 3
    endloop
  endfacet
  facet normal -0.827688992023468 -0.5611870884895325 0
    outer loop
      vertex 30.42542839050293 25.671092987060547 3
      vertex 29.757022857666016 26.65691566467285 0
      vertex 30.42542839050293 25.671092987060547 0
    endloop
  endfacet
  facet normal -0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 30.42542839050293 25.671092987060547 3
      vertex 30.42542839050293 25.671092987060547 0
      vertex 30.98332977294922 24.6187801361084 3
    endloop
  endfacet
  facet normal -0.883512020111084 -0.4684084355831146 0
    outer loop
      vertex 30.98332977294922 24.6187801361084 3
      vertex 30.42542839050293 25.671092987060547 0
      vertex 30.98332977294922 24.6187801361084 0
    endloop
  endfacet
  facet normal -0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 30.98332977294922 24.6187801361084 3
      vertex 30.98332977294922 24.6187801361084 0
      vertex 31.424184799194336 23.512317657470703 3
    endloop
  endfacet
  facet normal -0.9289767146110535 -0.37013816833496094 0
    outer loop
      vertex 31.424184799194336 23.512317657470703 3
      vertex 30.98332977294922 24.6187801361084 0
      vertex 31.424184799194336 23.512317657470703 0
    endloop
  endfacet
  facet normal -0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 31.424184799194336 23.512317657470703 3
      vertex 31.424184799194336 23.512317657470703 0
      vertex 31.742826461791992 22.364675521850586 3
    endloop
  endfacet
  facet normal -0.9635499715805054 -0.26752832531929016 0
    outer loop
      vertex 31.742826461791992 22.364675521850586 3
      vertex 31.424184799194336 23.512317657470703 0
      vertex 31.742826461791992 22.364675521850586 0
    endloop
  endfacet
  facet normal -0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 31.742826461791992 22.364675521850586 3
      vertex 31.742826461791992 22.364675521850586 0
      vertex 31.935518264770508 21.18931007385254 3
    endloop
  endfacet
  facet normal -0.9868265390396118 -0.16178199648857117 0
    outer loop
      vertex 31.935518264770508 21.18931007385254 3
      vertex 31.742826461791992 22.364675521850586 0
      vertex 31.935518264770508 21.18931007385254 0
    endloop
  endfacet
  facet normal -0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 31.935518264770508 21.18931007385254 3
      vertex 31.935518264770508 21.18931007385254 0
      vertex 32 20 3
    endloop
  endfacet
  facet normal -0.9985334277153015 -0.0541389100253582 0
    outer loop
      vertex 32 20 3
      vertex 31.935518264770508 21.18931007385254 0
      vertex 32 20 0
    endloop
  endfacet
  facet normal -0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 32 20 3
      vertex 32 20 0
      vertex 31.935518264770508 18.81068992614746 3
    endloop
  endfacet
  facet normal -0.9985334277153015 0.0541389100253582 0
    outer loop
      vertex 31.935518264770508 18.81068992614746 3
      vertex 32 20 0
      vertex 31.935518264770508 18.81068992614746 0
    endloop
  endfacet
  facet normal -0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 31.935518264770508 18.81068992614746 3
      vertex 31.935518264770508 18.81068992614746 0
      vertex 31.742826461791992 17.635324478149414 3
    endloop
  endfacet
  facet normal -0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 31.742826461791992 17.635324478149414 3
      vertex 31.935518264770508 18.81068992614746 0
      vertex 31.742826461791992 17.635324478149414 0
    endloop
  endfacet
  facet normal -0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 31.742826461791992 17.635324478149414 3
      vertex 31.742826461791992 17.635324478149414 0
      vertex 31.424184799194336 16.487682342529297 3
    endloop
  endfacet
  facet normal -0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 31.424184799194336 16.487682342529297 3
      vertex 31.742826461791992 17.635324478149414 0
      vertex 31.424184799194336 16.487682342529297 0
    endloop
  endfacet
  facet normal -0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 31.424184799194336 16.487682342529297 3
      vertex 31.424184799194336 16.487682342529297 0
      vertex 30.98332977294922 15.381219863891602 3
    endloop
  endfacet
  facet normal -0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 30.98332977294922 15.381219863891602 3
      vertex 31.424184799194336 16.487682342529297 0
      vertex 30.98332977294922 15.381219863891602 0
    endloop
  endfacet
  facet normal -0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 30.98332977294922 15.381219863891602 3
      vertex 30.98332977294922 15.381219863891602 0
      vertex 30.42542839050293 14.32890796661377 3
    endloop
  endfacet
  facet normal -0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 30.42542839050293 14.32890796661377 3
      vertex 30.98332977294922 15.381219863891602 0
      vertex 30.42542839050293 14.32890796661377 0
    endloop
  endfacet
  facet normal -0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 30.42542839050293 14.32890796661377 3
      vertex 30.42542839050293 14.32890796661377 0
      vertex 29.757022857666016 13.343083381652832 3
    endloop
  endfacet
  facet normal -0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 29.757022857666016 13.343083381652832 3
      vertex 30.42542839050293 14.32890796661377 0
      vertex 29.757022857666016 13.343083381652832 0
    endloop
  endfacet
  facet normal -0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 29.757022857666016 13.343083381652832 3
      vertex 29.757022857666016 13.343083381652832 0
      vertex 28.985950469970703 12.43530559539795 3
    endloop
  endfacet
  facet normal -0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 28.985950469970703 12.43530559539795 3
      vertex 29.757022857666016 13.343083381652832 0
      vertex 28.985950469970703 12.43530559539795 0
    endloop
  endfacet
  facet normal -0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 28.985950469970703 12.43530559539795 3
      vertex 28.985950469970703 12.43530559539795 0
      vertex 28.121248245239258 11.616217613220215 3
    endloop
  endfacet
  facet normal -0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 28.121248245239258 11.616217613220215 3
      vertex 28.985950469970703 12.43530559539795 0
      vertex 28.121248245239258 11.616217613220215 0
    endloop
  endfacet
  facet normal -0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 28.121248245239258 11.616217613220215 3
      vertex 28.121248245239258 11.616217613220215 0
      vertex 27.173057556152344 10.895421028137207 3
    endloop
  endfacet
  facet normal -0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 27.173057556152344 10.895421028137207 3
      vertex 28.121248245239258 11.616217613220215 0
      vertex 27.173057556152344 10.895421028137207 0
    endloop
  endfacet
  facet normal -0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 27.173057556152344 10.895421028137207 3
      vertex 27.173057556152344 10.895421028137207 0
      vertex 26.15249252319336 10.281367301940918 3
    endloop
  endfacet
  facet normal -0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 26.15249252319336 10.281367301940918 3
      vertex 27.173057556152344 10.895421028137207 0
      vertex 26.15249252319336 10.281367301940918 0
    endloop
  endfacet
  facet normal -0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 26.15249252319336 10.281367301940918 3
      vertex 26.15249252319336 10.281367301940918 0
      vertex 25.07151985168457 9.781255722045898 3
    endloop
  endfacet
  facet normal -0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 25.07151985168457 9.781255722045898 3
      vertex 26.15249252319336 10.281367301940918 0
      vertex 25.07151985168457 9.781255722045898 0
    endloop
  endfacet
  facet normal -0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 25.07151985168457 9.781255722045898 3
      vertex 25.07151985168457 9.781255722045898 0
      vertex 23.942811965942383 9.40095043182373 3
    endloop
  endfacet
  facet normal -0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 23.942811965942383 9.40095043182373 3
      vertex 25.07151985168457 9.781255722045898 0
      vertex 23.942811965942383 9.40095043182373 0
    endloop
  endfacet
  facet normal -0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 23.942811965942383 9.40095043182373 3
      vertex 23.942811965942383 9.40095043182373 0
      vertex 22.77960205078125 9.14490795135498 3
    endloop
  endfacet
  facet normal -0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 22.77960205078125 9.14490795135498 3
      vertex 23.942811965942383 9.40095043182373 0
      vertex 22.77960205078125 9.14490795135498 0
    endloop
  endfacet
  facet normal -0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 22.77960205078125 9.14490795135498 3
      vertex 22.77960205078125 9.14490795135498 0
      vertex 21.59552764892578 9.016132354736328 3
    endloop
  endfacet
  facet normal -0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 21.59552764892578 9.016132354736328 3
      vertex 22.77960205078125 9.14490795135498 0
      vertex 21.59552764892578 9.016132354736328 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 21.59552764892578 9.016132354736328 3
      vertex 21.59552764892578 9.016132354736328 0
      vertex 20.40447235107422 9.016132354736328 3
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 20.40447235107422 9.016132354736328 3
      vertex 21.59552764892578 9.016132354736328 0
      vertex 20.40447235107422 9.016132354736328 0
    endloop
  endfacet
  facet normal 0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 20.40447235107422 9.016132354736328 3
      vertex 20.40447235107422 9.016132354736328 0
      vertex 19.22039794921875 9.14490795135498 3
    endloop
  endfacet
  facet normal 0.10811901837587357 0.9941379427909851 0
    outer loop
      vertex 19.22039794921875 9.14490795135498 3
      vertex 20.40447235107422 9.016132354736328 0
      vertex 19.22039794921875 9.14490795135498 0
    endloop
  endfacet
  facet normal 0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 19.22039794921875 9.14490795135498 3
      vertex 19.22039794921875 9.14490795135498 0
      vertex 18.057188034057617 9.40095043182373 3
    endloop
  endfacet
  facet normal 0.2149704396724701 0.9766205549240112 0
    outer loop
      vertex 18.057188034057617 9.40095043182373 3
      vertex 19.22039794921875 9.14490795135498 0
      vertex 18.057188034057617 9.40095043182373 0
    endloop
  endfacet
  facet normal 0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 18.057188034057617 9.40095043182373 3
      vertex 18.057188034057617 9.40095043182373 0
      vertex 16.92848014831543 9.781255722045898 3
    endloop
  endfacet
  facet normal 0.3193015158176422 0.9476531744003296 0
    outer loop
      vertex 16.92848014831543 9.781255722045898 3
      vertex 18.057188034057617 9.40095043182373 0
      vertex 16.92848014831543 9.781255722045898 0
    endloop
  endfacet
  facet normal 0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 16.92848014831543 9.781255722045898 3
      vertex 16.92848014831543 9.781255722045898 0
      vertex 15.84750747680664 10.281367301940918 3
    endloop
  endfacet
  facet normal 0.41988909244537354 0.9075754284858704 0
    outer loop
      vertex 15.84750747680664 10.281367301940918 3
      vertex 16.92848014831543 9.781255722045898 0
      vertex 15.84750747680664 10.281367301940918 0
    endloop
  endfacet
  facet normal 0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 15.84750747680664 10.281367301940918 3
      vertex 15.84750747680664 10.281367301940918 0
      vertex 14.826942443847656 10.895421028137207 3
    endloop
  endfacet
  facet normal 0.5155538320541382 0.856857180595398 0
    outer loop
      vertex 14.826942443847656 10.895421028137207 3
      vertex 15.84750747680664 10.281367301940918 0
      vertex 14.826942443847656 10.895421028137207 0
    endloop
  endfacet
  facet normal 0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 14.826942443847656 10.895421028137207 3
      vertex 14.826942443847656 10.895421028137207 0
      vertex 13.878750801086426 11.616217613220215 3
    endloop
  endfacet
  facet normal 0.6051742434501648 0.7960930466651917 0
    outer loop
      vertex 13.878750801086426 11.616217613220215 3
      vertex 14.826942443847656 10.895421028137207 0
      vertex 13.878750801086426 11.616217613220215 0
    endloop
  endfacet
  facet normal 0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 13.878750801086426 11.616217613220215 3
      vertex 13.878750801086426 11.616217613220215 0
      vertex 13.014049530029297 12.43530559539795 3
    endloop
  endfacet
  facet normal 0.6876994371414185 0.7259954810142517 0
    outer loop
      vertex 13.014049530029297 12.43530559539795 3
      vertex 13.878750801086426 11.616217613220215 0
      vertex 13.014049530029297 12.43530559539795 0
    endloop
  endfacet
  facet normal 0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 13.014049530029297 12.43530559539795 3
      vertex 13.014049530029297 12.43530559539795 0
      vertex 12.242976188659668 13.343083381652832 3
    endloop
  endfacet
  facet normal 0.7621620297431946 0.6473863124847412 0
    outer loop
      vertex 12.242976188659668 13.343083381652832 3
      vertex 13.014049530029297 12.43530559539795 0
      vertex 12.242976188659668 13.343083381652832 0
    endloop
  endfacet
  facet normal 0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 12.242976188659668 13.343083381652832 3
      vertex 12.242976188659668 13.343083381652832 0
      vertex 11.574570655822754 14.32890796661377 3
    endloop
  endfacet
  facet normal 0.827688992023468 0.5611870884895325 0
    outer loop
      vertex 11.574570655822754 14.32890796661377 3
      vertex 12.242976188659668 13.343083381652832 0
      vertex 11.574570655822754 14.32890796661377 0
    endloop
  endfacet
  facet normal 0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 11.574570655822754 14.32890796661377 3
      vertex 11.574570655822754 14.32890796661377 0
      vertex 11.016670227050781 15.381219863891602 3
    endloop
  endfacet
  facet normal 0.883512020111084 0.4684084355831146 0
    outer loop
      vertex 11.016670227050781 15.381219863891602 3
      vertex 11.574570655822754 14.32890796661377 0
      vertex 11.016670227050781 15.381219863891602 0
    endloop
  endfacet
  facet normal 0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 11.016670227050781 15.381219863891602 3
      vertex 11.016670227050781 15.381219863891602 0
      vertex 10.575815200805664 16.487682342529297 3
    endloop
  endfacet
  facet normal 0.9289767146110535 0.37013816833496094 0
    outer loop
      vertex 10.575815200805664 16.487682342529297 3
      vertex 11.016670227050781 15.381219863891602 0
      vertex 10.575815200805664 16.487682342529297 0
    endloop
  endfacet
  facet normal 0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 10.575815200805664 16.487682342529297 3
      vertex 10.575815200805664 16.487682342529297 0
      vertex 10.257173538208008 17.635324478149414 3
    endloop
  endfacet
  facet normal 0.9635499715805054 0.26752832531929016 0
    outer loop
      vertex 10.257173538208008 17.635324478149414 3
      vertex 10.575815200805664 16.487682342529297 0
      vertex 10.257173538208008 17.635324478149414 0
    endloop
  endfacet
  facet normal 0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 10.257173538208008 17.635324478149414 3
      vertex 10.257173538208008 17.635324478149414 0
      vertex 10.064482688903809 18.81068992614746 3
    endloop
  endfacet
  facet normal 0.9868265390396118 0.16178199648857117 0
    outer loop
      vertex 10.064482688903809 18.81068992614746 3
      vertex 10.257173538208008 17.635324478149414 0
      vertex 10.064482688903809 18.81068992614746 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 52 65.9107666015625 3
      vertex 52 18.0892333984375 3
      vertex 52 65.9107666015625 0
    endloop
  endfacet
  facet normal 1 0 0
    outer loop
      vertex 52 65.9107666015625 0
      vertex 52 18.0892333984375 3
      vertex 52 18.0892333984375 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 39.712215423583984 0 3
      vertex 2.2877840995788574 0 3
      vertex 39.712215423583984 0 0
    endloop
  endfacet
  facet normal 0 -1 0
    outer loop
      vertex 39.712215423583984 0 0
      vertex 2.2877840995788574 0 3
      vertex 2.2877840995788574 0 0
    endloop
  endfacet
  facet normal -1 1.1143663392262102e-16 0
    outer loop
      vertex -10 18.0892333984375 3
      vertex -10 65.9107666015625 3
      vertex -10 18.0892333984375 0
    endloop
  endfacet
  facet normal -1 1.1143663392262102e-16 0
    outer loop
      vertex -10 18.0892333984375 0
      vertex -10 65.9107666015625 3
      vertex -10 65.9107666015625 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 39.712215423583984 84 3
      vertex 2.2877840995788574 84 0
    endloop
  endfacet
  facet normal 0 1 0
    outer loop
      vertex 2.2877840995788574 84 0
      vertex 39.712215423583984 84 3
      vertex 39.712215423583984 84 0
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.937335014343262 17.383974075317383 3
      vertex -6.457937240600586 20.630905151367188 3
      vertex -10 18.0892333984375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -10 18.0892333984375 3
      vertex -6.457937240600586 20.630905151367188 3
      vertex -6.752613544464111 21.0364933013916 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -10 18.0892333984375 3
      vertex -6.752613544464111 21.0364933013916 3
      vertex -6.937166213989258 21.502620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.937335014343262 17.383974075317383 3
      vertex -9.751304626464844 16.7008113861084 3
      vertex -6.457937240600586 20.630905151367188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 20.630905151367188 3
      vertex -9.751304626464844 16.7008113861084 3
      vertex -9.447736740112305 16.061153411865234 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 20.630905151367188 3
      vertex -9.447736740112305 16.061153411865234 3
      vertex -6.071653366088867 20.311344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.071653366088867 20.311344146728516 3
      vertex -9.447736740112305 16.061153411865234 3
      vertex -5.6180338859558105 20.09788703918457 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5.6180338859558105 20.09788703918457 3
      vertex -9.447736740112305 16.061153411865234 3
      vertex -5.12558126449585 20.00394630432129 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5.12558126449585 20.00394630432129 3
      vertex -9.447736740112305 16.061153411865234 3
      vertex -4.625237464904785 20.035425186157227 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.625237464904785 20.035425186157227 3
      vertex -9.447736740112305 16.061153411865234 3
      vertex -1.1599526405334473 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.625237464904785 20.035425186157227 3
      vertex -1.1599526405334473 1.9719195365905762 3
      vertex -4.148441314697266 20.190345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -4.148441314697266 20.190345764160156 3
      vertex -1.1599526405334473 1.9719195365905762 3
      vertex -3.725152015686035 20.458972930908203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.725152015686035 20.458972930908203 3
      vertex -1.1599526405334473 1.9719195365905762 3
      vertex 4.917468070983887 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.725152015686035 20.458972930908203 3
      vertex 4.917468070983887 5.625 3
      vertex 5.116116523742676 5.883883476257324 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.7589139938354492 1.408160924911499 3
      vertex 4.75 5 3
      vertex -1.1599526405334473 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 3
      vertex 4.75 5 3
      vertex 4.792592525482178 5.323523998260498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 1.9719195365905762 3
      vertex 4.792592525482178 5.323523998260498 3
      vertex 4.917468070983887 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.7589139938354492 1.408160924911499 3
      vertex -0.2667303681373596 0.9219396710395813 3
      vertex 4.75 5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 5 3
      vertex -0.2667303681373596 0.9219396710395813 3
      vertex 0.3018741011619568 0.5278016924858093 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 5 3
      vertex 0.3018741011619568 0.5278016924858093 3
      vertex 0.9298890233039856 0.2375379502773285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 5 3
      vertex 0.9298890233039856 0.2375379502773285 3
      vertex 4.792592525482178 4.676476001739502 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 4.676476001739502 3
      vertex 0.9298890233039856 0.2375379502773285 3
      vertex 1.5985267162322998 0.059831973165273666 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 4.676476001739502 3
      vertex 1.5985267162322998 0.059831973165273666 3
      vertex 2.2877840995788574 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 6.625 3.917468309402466 3
      vertex 2.2877840995788574 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 0 3
      vertex 6.625 3.917468309402466 3
      vertex 6.323523998260498 3.792592763900757 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 0 3
      vertex 6.323523998260498 3.792592763900757 3
      vertex 6 3.75 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 40.40147399902344 0.059831973165273666 3
      vertex 37.2074089050293 4.676476001739502 3
      vertex 39.712215423583984 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 37.2074089050293 4.676476001739502 3
      vertex 37.0825309753418 4.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 37.0825309753418 4.375 3
      vertex 36.88388442993164 4.116116523742676 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 40.40147399902344 0.059831973165273666 3
      vertex 41.07011032104492 0.2375379502773285 3
      vertex 37.2074089050293 4.676476001739502 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.2074089050293 4.676476001739502 3
      vertex 41.07011032104492 0.2375379502773285 3
      vertex 37.25 5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.25 5 3
      vertex 41.07011032104492 0.2375379502773285 3
      vertex 41.69812774658203 0.5278016924858093 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.25 5 3
      vertex 41.69812774658203 0.5278016924858093 3
      vertex 42.26673126220703 0.9219396710395813 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 42.26673126220703 0.9219396710395813 3
      vertex 42.758914947509766 1.408160924911499 3
      vertex 37.25 5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.25 5 3
      vertex 42.758914947509766 1.408160924911499 3
      vertex 43.15995407104492 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.25 5 3
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 37.2074089050293 5.323523998260498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.2074089050293 5.323523998260498 3
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 37.0825309753418 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.0825309753418 5.625 3
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 45.9283447265625 20.311344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.0825309753418 5.625 3
      vertex 45.9283447265625 20.311344146728516 3
      vertex 45.54206085205078 20.630905151367188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.44773864746094 16.061153411865234 3
      vertex 46.874420166015625 20.00394630432129 3
      vertex 43.15995407104492 1.9719195365905762 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 46.874420166015625 20.00394630432129 3
      vertex 46.38196563720703 20.09788703918457 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 1.9719195365905762 3
      vertex 46.38196563720703 20.09788703918457 3
      vertex 45.9283447265625 20.311344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.751304626464844 16.7008113861084 3
      vertex 48.27484893798828 20.458972930908203 3
      vertex 51.44773864746094 16.061153411865234 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.44773864746094 16.061153411865234 3
      vertex 48.27484893798828 20.458972930908203 3
      vertex 47.851558685302734 20.190345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.44773864746094 16.061153411865234 3
      vertex 47.851558685302734 20.190345764160156 3
      vertex 47.37476348876953 20.035425186157227 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.751304626464844 16.7008113861084 3
      vertex 51.93733596801758 17.383974075317383 3
      vertex 48.27484893798828 20.458972930908203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 20.458972930908203 3
      vertex 51.93733596801758 17.383974075317383 3
      vertex 52 18.0892333984375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 20.458972930908203 3
      vertex 52 18.0892333984375 3
      vertex 48.61803436279297 20.82442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.61803436279297 20.82442855834961 3
      vertex 52 18.0892333984375 3
      vertex 48.859554290771484 21.263750076293945 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.859554290771484 21.263750076293945 3
      vertex 52 18.0892333984375 3
      vertex 48.984230041503906 21.74933433532715 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.984230041503906 21.74933433532715 3
      vertex 52 18.0892333984375 3
      vertex 48.984230041503906 22.25066566467285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.984230041503906 22.25066566467285 3
      vertex 52 18.0892333984375 3
      vertex 48.859554290771484 22.736249923706055 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.859554290771484 22.736249923706055 3
      vertex 52 18.0892333984375 3
      vertex 48.859554290771484 61.26375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.859554290771484 22.736249923706055 3
      vertex 48.859554290771484 61.26375198364258 3
      vertex 48.61803436279297 23.17557144165039 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.61803436279297 23.17557144165039 3
      vertex 48.859554290771484 61.26375198364258 3
      vertex 48.61803436279297 60.82442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.61803436279297 23.17557144165039 3
      vertex 48.61803436279297 60.82442855834961 3
      vertex 48.27484893798828 60.4589729309082 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 52 18.0892333984375 3
      vertex 52 65.9107666015625 3
      vertex 48.859554290771484 61.26375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.859554290771484 61.26375198364258 3
      vertex 52 65.9107666015625 3
      vertex 48.984230041503906 61.749332427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.984230041503906 61.749332427978516 3
      vertex 52 65.9107666015625 3
      vertex 48.984230041503906 62.250667572021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.984230041503906 62.250667572021484 3
      vertex 52 65.9107666015625 3
      vertex 48.859554290771484 62.73624801635742 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.859554290771484 62.73624801635742 3
      vertex 52 65.9107666015625 3
      vertex 48.61803436279297 63.17557144165039 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.61803436279297 63.17557144165039 3
      vertex 52 65.9107666015625 3
      vertex 48.27484893798828 63.5410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 63.5410270690918 3
      vertex 52 65.9107666015625 3
      vertex 51.93733596801758 66.61602783203125 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 63.5410270690918 3
      vertex 51.93733596801758 66.61602783203125 3
      vertex 51.751304626464844 67.29918670654297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 51.751304626464844 67.29918670654297 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 48.27484893798828 63.5410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 63.5410270690918 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 47.851558685302734 63.809654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.851558685302734 63.809654235839844 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 47.37476348876953 63.96457290649414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.37476348876953 63.96457290649414 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 46.874420166015625 63.99605178833008 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 63.99605178833008 3
      vertex 51.44773864746094 67.93885040283203 3
      vertex 43.15995407104492 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 63.99605178833008 3
      vertex 43.15995407104492 82.02808380126953 3
      vertex 46.38196563720703 63.90211486816406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.38196563720703 63.90211486816406 3
      vertex 43.15995407104492 82.02808380126953 3
      vertex 45.9283447265625 63.688655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.9283447265625 63.688655853271484 3
      vertex 43.15995407104492 82.02808380126953 3
      vertex 45.54206085205078 63.36909484863281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 63.36909484863281 3
      vertex 43.15995407104492 82.02808380126953 3
      vertex 45.24738693237305 62.96350860595703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 62.96350860595703 3
      vertex 43.15995407104492 82.02808380126953 3
      vertex 30.98332977294922 64.61878204345703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 62.96350860595703 3
      vertex 30.98332977294922 64.61878204345703 3
      vertex 31.424184799194336 63.5123176574707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 42.758914947509766 82.59184265136719 3
      vertex 42.26673126220703 83.07806396484375 3
      vertex 43.15995407104492 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 82.02808380126953 3
      vertex 42.26673126220703 83.07806396484375 3
      vertex 41.69812774658203 83.47219848632812 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 82.02808380126953 3
      vertex 41.69812774658203 83.47219848632812 3
      vertex 41.07011032104492 83.76245880126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 41.07011032104492 83.76245880126953 3
      vertex 40.40147399902344 83.94017028808594 3
      vertex 43.15995407104492 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 82.02808380126953 3
      vertex 40.40147399902344 83.94017028808594 3
      vertex 39.712215423583984 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 43.15995407104492 82.02808380126953 3
      vertex 39.712215423583984 84 3
      vertex 30.98332977294922 64.61878204345703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 30.98332977294922 64.61878204345703 3
      vertex 39.712215423583984 84 3
      vertex 30.42542839050293 65.67108917236328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 30.42542839050293 65.67108917236328 3
      vertex 39.712215423583984 84 3
      vertex 29.757022857666016 66.65691375732422 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 29.757022857666016 66.65691375732422 3
      vertex 39.712215423583984 84 3
      vertex 28.985950469970703 67.564697265625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.985950469970703 67.564697265625 3
      vertex 39.712215423583984 84 3
      vertex 28.121248245239258 68.38378143310547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 28.121248245239258 68.38378143310547 3
      vertex 39.712215423583984 84 3
      vertex 27.173057556152344 69.10457611083984 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.173057556152344 69.10457611083984 3
      vertex 39.712215423583984 84 3
      vertex 22.984230041503906 77.25066375732422 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.173057556152344 69.10457611083984 3
      vertex 22.984230041503906 77.25066375732422 3
      vertex 26.15249252319336 69.71863555908203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.15249252319336 69.71863555908203 3
      vertex 22.984230041503906 77.25066375732422 3
      vertex 22.984230041503906 76.74933624267578 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.15249252319336 69.71863555908203 3
      vertex 22.984230041503906 76.74933624267578 3
      vertex 25.07151985168457 70.21874237060547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25.07151985168457 70.21874237060547 3
      vertex 22.984230041503906 76.74933624267578 3
      vertex 22.85955238342285 76.26374816894531 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25.07151985168457 70.21874237060547 3
      vertex 22.85955238342285 76.26374816894531 3
      vertex 23.942811965942383 70.59905242919922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 23.942811965942383 70.59905242919922 3
      vertex 22.85955238342285 76.26374816894531 3
      vertex 22.61803436279297 75.82443237304688 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 23.942811965942383 70.59905242919922 3
      vertex 22.61803436279297 75.82443237304688 3
      vertex 22.27484703063965 75.45897674560547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 20.874418258666992 78.99605560302734 3
      vertex 39.712215423583984 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 84 3
      vertex 20.874418258666992 78.99605560302734 3
      vertex 21.37476348876953 78.9645767211914 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 84 3
      vertex 21.37476348876953 78.9645767211914 3
      vertex 21.851558685302734 78.80965423583984 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 1.5985267162322998 83.94017028808594 3
      vertex -1.1599526405334473 82.02808380126953 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex -1.1599526405334473 82.02808380126953 3
      vertex 11.016670227050781 64.61878204345703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 11.016670227050781 64.61878204345703 3
      vertex 11.574570655822754 65.67108917236328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 1.5985267162322998 83.94017028808594 3
      vertex 0.9298890233039856 83.76245880126953 3
      vertex -1.1599526405334473 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 3
      vertex 0.9298890233039856 83.76245880126953 3
      vertex 0.3018741011619568 83.47219848632812 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 3
      vertex 0.3018741011619568 83.47219848632812 3
      vertex -0.2667303681373596 83.07806396484375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -0.2667303681373596 83.07806396484375 3
      vertex -0.7589139938354492 82.59184265136719 3
      vertex -1.1599526405334473 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.447736740112305 67.93885040283203 3
      vertex -4.625237464904785 63.96457290649414 3
      vertex -1.1599526405334473 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -4.625237464904785 63.96457290649414 3
      vertex -4.148441314697266 63.809654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -4.148441314697266 63.809654235839844 3
      vertex -3.725152015686035 63.5410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.751304626464844 67.29918670654297 3
      vertex -6.457937240600586 63.36909484863281 3
      vertex -9.447736740112305 67.93885040283203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.447736740112305 67.93885040283203 3
      vertex -6.457937240600586 63.36909484863281 3
      vertex -6.071653366088867 63.688655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.447736740112305 67.93885040283203 3
      vertex -6.071653366088867 63.688655853271484 3
      vertex -5.6180338859558105 63.90211486816406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.751304626464844 67.29918670654297 3
      vertex -9.937335014343262 66.61602783203125 3
      vertex -6.457937240600586 63.36909484863281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 63.36909484863281 3
      vertex -9.937335014343262 66.61602783203125 3
      vertex -10 65.9107666015625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 63.36909484863281 3
      vertex -10 65.9107666015625 3
      vertex -6.752613544464111 62.96350860595703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.752613544464111 62.96350860595703 3
      vertex -10 65.9107666015625 3
      vertex -6.937166213989258 62.497379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.937166213989258 62.497379302978516 3
      vertex -10 65.9107666015625 3
      vertex -7 62 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -7 62 3
      vertex -10 65.9107666015625 3
      vertex -6.937166213989258 61.502620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.937166213989258 61.502620697021484 3
      vertex -10 65.9107666015625 3
      vertex -6.752613544464111 61.03649139404297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.752613544464111 61.03649139404297 3
      vertex -10 65.9107666015625 3
      vertex -10 18.0892333984375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.752613544464111 61.03649139404297 3
      vertex -10 18.0892333984375 3
      vertex -6.752613544464111 22.9635066986084 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.752613544464111 22.9635066986084 3
      vertex -10 18.0892333984375 3
      vertex -6.937166213989258 22.497379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.937166213989258 22.497379302978516 3
      vertex -10 18.0892333984375 3
      vertex -7 22 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -7 22 3
      vertex -10 18.0892333984375 3
      vertex -6.937166213989258 21.502620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 18.81068992614746 3
      vertex 10 20 3
      vertex -3.015770673751831 21.74933433532715 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.015770673751831 21.74933433532715 3
      vertex 10 20 3
      vertex 10.064482688903809 21.18931007385254 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.015770673751831 21.74933433532715 3
      vertex 10.064482688903809 21.18931007385254 3
      vertex -3.015770673751831 22.25066566467285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.015770673751831 22.25066566467285 3
      vertex 10.064482688903809 21.18931007385254 3
      vertex 10.257173538208008 22.364675521850586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.015770673751831 22.25066566467285 3
      vertex 10.257173538208008 22.364675521850586 3
      vertex 5.676476001739502 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 33.7925910949707 3
      vertex 10.257173538208008 22.364675521850586 3
      vertex 10.575815200805664 23.512317657470703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 33.7925910949707 3
      vertex 10.575815200805664 23.512317657470703 3
      vertex 6 33.75 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 33.75 3
      vertex 10.575815200805664 23.512317657470703 3
      vertex 11.016670227050781 24.6187801361084 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 33.75 3
      vertex 11.016670227050781 24.6187801361084 3
      vertex 6.323523998260498 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.323523998260498 33.7925910949707 3
      vertex 11.016670227050781 24.6187801361084 3
      vertex 6.625 33.9174690246582 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 33.9174690246582 3
      vertex 11.016670227050781 24.6187801361084 3
      vertex 11.574570655822754 25.671092987060547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 33.9174690246582 3
      vertex 11.574570655822754 25.671092987060547 3
      vertex 6.883883476257324 34.11611557006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 34.11611557006836 3
      vertex 11.574570655822754 25.671092987060547 3
      vertex 12.242976188659668 26.65691566467285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 34.11611557006836 3
      vertex 12.242976188659668 26.65691566467285 3
      vertex 7.082531929016113 34.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 34.375 3
      vertex 12.242976188659668 26.65691566467285 3
      vertex 13.014049530029297 27.564693450927734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 34.375 3
      vertex 13.014049530029297 27.564693450927734 3
      vertex 7.207407474517822 34.676475524902344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 34.676475524902344 3
      vertex 13.014049530029297 27.564693450927734 3
      vertex 13.878750801086426 28.3837833404541 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 34.676475524902344 3
      vertex 13.878750801086426 28.3837833404541 3
      vertex 7.25 35 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.25 35 3
      vertex 13.878750801086426 28.3837833404541 3
      vertex 14.826942443847656 29.10457992553711 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.25 35 3
      vertex 14.826942443847656 29.10457992553711 3
      vertex 7.207407474517822 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 14.826942443847656 29.10457992553711 3
      vertex 15.84750747680664 29.718631744384766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 15.84750747680664 29.718631744384766 3
      vertex 16.92848014831543 30.2187442779541 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 16.92848014831543 30.2187442779541 3
      vertex 16.92848014831543 49.78125762939453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 16.92848014831543 49.78125762939453 3
      vertex 16.92848014831543 30.2187442779541 3
      vertex 18.057188034057617 30.599050521850586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 16.92848014831543 49.78125762939453 3
      vertex 18.057188034057617 30.599050521850586 3
      vertex 18.057188034057617 49.40095138549805 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 18.057188034057617 49.40095138549805 3
      vertex 18.057188034057617 30.599050521850586 3
      vertex 19.22039794921875 30.855091094970703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 18.057188034057617 49.40095138549805 3
      vertex 19.22039794921875 30.855091094970703 3
      vertex 19.22039794921875 49.1449089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.22039794921875 49.1449089050293 3
      vertex 19.22039794921875 30.855091094970703 3
      vertex 20.40447235107422 30.983867645263672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.22039794921875 49.1449089050293 3
      vertex 20.40447235107422 30.983867645263672 3
      vertex 20.40447235107422 49.01613235473633 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.40447235107422 49.01613235473633 3
      vertex 20.40447235107422 30.983867645263672 3
      vertex 21.59552764892578 30.983867645263672 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.40447235107422 49.01613235473633 3
      vertex 21.59552764892578 30.983867645263672 3
      vertex 21.59552764892578 49.01613235473633 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 21.59552764892578 49.01613235473633 3
      vertex 21.59552764892578 30.983867645263672 3
      vertex 22.77960205078125 49.1449089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 22.77960205078125 49.1449089050293 3
      vertex 21.59552764892578 30.983867645263672 3
      vertex 22.77960205078125 30.855091094970703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 22.77960205078125 49.1449089050293 3
      vertex 22.77960205078125 30.855091094970703 3
      vertex 23.942811965942383 49.40095138549805 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 23.942811965942383 49.40095138549805 3
      vertex 22.77960205078125 30.855091094970703 3
      vertex 23.942811965942383 30.599050521850586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 23.942811965942383 49.40095138549805 3
      vertex 23.942811965942383 30.599050521850586 3
      vertex 25.07151985168457 49.78125762939453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25.07151985168457 49.78125762939453 3
      vertex 23.942811965942383 30.599050521850586 3
      vertex 25.07151985168457 30.2187442779541 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25.07151985168457 49.78125762939453 3
      vertex 25.07151985168457 30.2187442779541 3
      vertex 34.7925910949707 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 35.323524475097656 3
      vertex 25.07151985168457 30.2187442779541 3
      vertex 26.15249252319336 29.718631744384766 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 35.323524475097656 3
      vertex 26.15249252319336 29.718631744384766 3
      vertex 27.173057556152344 29.10457992553711 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 35.323524475097656 3
      vertex 27.173057556152344 29.10457992553711 3
      vertex 34.75 35 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.75 35 3
      vertex 27.173057556152344 29.10457992553711 3
      vertex 28.121248245239258 28.3837833404541 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.75 35 3
      vertex 28.121248245239258 28.3837833404541 3
      vertex 34.7925910949707 34.676475524902344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 34.676475524902344 3
      vertex 28.121248245239258 28.3837833404541 3
      vertex 28.985950469970703 27.564693450927734 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 34.676475524902344 3
      vertex 28.985950469970703 27.564693450927734 3
      vertex 34.9174690246582 34.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 34.375 3
      vertex 28.985950469970703 27.564693450927734 3
      vertex 29.757022857666016 26.65691566467285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 34.375 3
      vertex 29.757022857666016 26.65691566467285 3
      vertex 35.11611557006836 34.11611557006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 34.11611557006836 3
      vertex 29.757022857666016 26.65691566467285 3
      vertex 30.42542839050293 25.671092987060547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 34.11611557006836 3
      vertex 30.42542839050293 25.671092987060547 3
      vertex 35.375 33.9174690246582 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 33.9174690246582 3
      vertex 30.42542839050293 25.671092987060547 3
      vertex 30.98332977294922 24.6187801361084 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 33.9174690246582 3
      vertex 30.98332977294922 24.6187801361084 3
      vertex 35.676475524902344 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.676475524902344 33.7925910949707 3
      vertex 30.98332977294922 24.6187801361084 3
      vertex 36 33.75 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36 33.75 3
      vertex 30.98332977294922 24.6187801361084 3
      vertex 31.424184799194336 23.512317657470703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36 33.75 3
      vertex 31.424184799194336 23.512317657470703 3
      vertex 36.323524475097656 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.323524475097656 33.7925910949707 3
      vertex 31.424184799194336 23.512317657470703 3
      vertex 31.742826461791992 22.364675521850586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.323524475097656 33.7925910949707 3
      vertex 31.742826461791992 22.364675521850586 3
      vertex 45.06283187866211 22.497379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 22.497379302978516 3
      vertex 31.742826461791992 22.364675521850586 3
      vertex 45 22 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 22 3
      vertex 31.742826461791992 22.364675521850586 3
      vertex 31.935518264770508 21.18931007385254 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 22 3
      vertex 31.935518264770508 21.18931007385254 3
      vertex 32 20 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 22 3
      vertex 32 20 3
      vertex 45.06283187866211 21.502620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 21.502620697021484 3
      vertex 32 20 3
      vertex 31.935518264770508 18.81068992614746 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 21.502620697021484 3
      vertex 31.935518264770508 18.81068992614746 3
      vertex 45.24738693237305 21.0364933013916 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 21.0364933013916 3
      vertex 31.935518264770508 18.81068992614746 3
      vertex 31.742826461791992 17.635324478149414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 21.0364933013916 3
      vertex 31.742826461791992 17.635324478149414 3
      vertex 36.625 6.082531929016113 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.625 6.082531929016113 3
      vertex 31.742826461791992 17.635324478149414 3
      vertex 36.323524475097656 6.207407474517822 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.323524475097656 6.207407474517822 3
      vertex 31.742826461791992 17.635324478149414 3
      vertex 31.424184799194336 16.487682342529297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.323524475097656 6.207407474517822 3
      vertex 31.424184799194336 16.487682342529297 3
      vertex 36 6.25 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36 6.25 3
      vertex 31.424184799194336 16.487682342529297 3
      vertex 30.98332977294922 15.381219863891602 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36 6.25 3
      vertex 30.98332977294922 15.381219863891602 3
      vertex 35.676475524902344 6.207407474517822 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.676475524902344 6.207407474517822 3
      vertex 30.98332977294922 15.381219863891602 3
      vertex 35.375 6.082531929016113 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 6.082531929016113 3
      vertex 30.98332977294922 15.381219863891602 3
      vertex 30.42542839050293 14.32890796661377 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 6.082531929016113 3
      vertex 30.42542839050293 14.32890796661377 3
      vertex 35.11611557006836 5.883883476257324 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 5.883883476257324 3
      vertex 30.42542839050293 14.32890796661377 3
      vertex 29.757022857666016 13.343083381652832 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 5.883883476257324 3
      vertex 29.757022857666016 13.343083381652832 3
      vertex 34.9174690246582 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 5.625 3
      vertex 29.757022857666016 13.343083381652832 3
      vertex 28.985950469970703 12.43530559539795 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 5.625 3
      vertex 28.985950469970703 12.43530559539795 3
      vertex 34.7925910949707 5.323523998260498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 5.323523998260498 3
      vertex 28.985950469970703 12.43530559539795 3
      vertex 28.121248245239258 11.616217613220215 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 5.323523998260498 3
      vertex 28.121248245239258 11.616217613220215 3
      vertex 34.75 5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.75 5 3
      vertex 28.121248245239258 11.616217613220215 3
      vertex 27.173057556152344 10.895421028137207 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.75 5 3
      vertex 27.173057556152344 10.895421028137207 3
      vertex 34.7925910949707 4.676476001739502 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 4.676476001739502 3
      vertex 27.173057556152344 10.895421028137207 3
      vertex 26.15249252319336 10.281367301940918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 4.676476001739502 3
      vertex 26.15249252319336 10.281367301940918 3
      vertex 25.07151985168457 9.781255722045898 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.7925910949707 4.676476001739502 3
      vertex 25.07151985168457 9.781255722045898 3
      vertex 34.9174690246582 4.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 4.375 3
      vertex 25.07151985168457 9.781255722045898 3
      vertex 23.942811965942383 9.40095043182373 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 4.375 3
      vertex 23.942811965942383 9.40095043182373 3
      vertex 22.77960205078125 9.14490795135498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.9174690246582 4.375 3
      vertex 22.77960205078125 9.14490795135498 3
      vertex 35.11611557006836 4.116116523742676 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 4.116116523742676 3
      vertex 22.77960205078125 9.14490795135498 3
      vertex 21.59552764892578 9.016132354736328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.11611557006836 4.116116523742676 3
      vertex 21.59552764892578 9.016132354736328 3
      vertex 35.375 3.917468309402466 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 3.917468309402466 3
      vertex 21.59552764892578 9.016132354736328 3
      vertex 20.40447235107422 9.016132354736328 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.375 3.917468309402466 3
      vertex 20.40447235107422 9.016132354736328 3
      vertex 6.625 3.917468309402466 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 3.917468309402466 3
      vertex 20.40447235107422 9.016132354736328 3
      vertex 6.883883476257324 4.116116523742676 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 4.116116523742676 3
      vertex 20.40447235107422 9.016132354736328 3
      vertex 19.22039794921875 9.14490795135498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 4.116116523742676 3
      vertex 19.22039794921875 9.14490795135498 3
      vertex 7.082531929016113 4.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 4.375 3
      vertex 19.22039794921875 9.14490795135498 3
      vertex 18.057188034057617 9.40095043182373 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 4.375 3
      vertex 18.057188034057617 9.40095043182373 3
      vertex 16.92848014831543 9.781255722045898 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 4.375 3
      vertex 16.92848014831543 9.781255722045898 3
      vertex 7.207407474517822 4.676476001739502 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 4.676476001739502 3
      vertex 16.92848014831543 9.781255722045898 3
      vertex 15.84750747680664 10.281367301940918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 4.676476001739502 3
      vertex 15.84750747680664 10.281367301940918 3
      vertex 14.826942443847656 10.895421028137207 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 4.676476001739502 3
      vertex 14.826942443847656 10.895421028137207 3
      vertex 7.25 5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.25 5 3
      vertex 14.826942443847656 10.895421028137207 3
      vertex 13.878750801086426 11.616217613220215 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.25 5 3
      vertex 13.878750801086426 11.616217613220215 3
      vertex 7.207407474517822 5.323523998260498 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 5.323523998260498 3
      vertex 13.878750801086426 11.616217613220215 3
      vertex 13.014049530029297 12.43530559539795 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 5.323523998260498 3
      vertex 13.014049530029297 12.43530559539795 3
      vertex 7.082531929016113 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 5.625 3
      vertex 13.014049530029297 12.43530559539795 3
      vertex 12.242976188659668 13.343083381652832 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 5.625 3
      vertex 12.242976188659668 13.343083381652832 3
      vertex 6.883883476257324 5.883883476257324 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 5.883883476257324 3
      vertex 12.242976188659668 13.343083381652832 3
      vertex 11.574570655822754 14.32890796661377 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 5.883883476257324 3
      vertex 11.574570655822754 14.32890796661377 3
      vertex 6.625 6.082531929016113 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 6.082531929016113 3
      vertex 11.574570655822754 14.32890796661377 3
      vertex 11.016670227050781 15.381219863891602 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 6.082531929016113 3
      vertex 11.016670227050781 15.381219863891602 3
      vertex 6.323523998260498 6.207407474517822 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.323523998260498 6.207407474517822 3
      vertex 11.016670227050781 15.381219863891602 3
      vertex 6 6.25 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 6.25 3
      vertex 11.016670227050781 15.381219863891602 3
      vertex 10.575815200805664 16.487682342529297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 6.25 3
      vertex 10.575815200805664 16.487682342529297 3
      vertex 5.676476001739502 6.207407474517822 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 6.207407474517822 3
      vertex 10.575815200805664 16.487682342529297 3
      vertex 10.257173538208008 17.635324478149414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 6.207407474517822 3
      vertex 10.257173538208008 17.635324478149414 3
      vertex 5.375 6.082531929016113 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 6.082531929016113 3
      vertex 10.257173538208008 17.635324478149414 3
      vertex -3.1404471397399902 21.263750076293945 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 6.082531929016113 3
      vertex -3.1404471397399902 21.263750076293945 3
      vertex -3.3819661140441895 20.82442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.257173538208008 17.635324478149414 3
      vertex 10.064482688903809 18.81068992614746 3
      vertex -3.1404471397399902 21.263750076293945 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.1404471397399902 21.263750076293945 3
      vertex 10.064482688903809 18.81068992614746 3
      vertex -3.015770673751831 21.74933433532715 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.725152015686035 20.458972930908203 3
      vertex 5.116116523742676 5.883883476257324 3
      vertex -3.3819661140441895 20.82442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.3819661140441895 20.82442855834961 3
      vertex 5.116116523742676 5.883883476257324 3
      vertex 5.375 6.082531929016113 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 3.75 3
      vertex 5.676476001739502 3.792592763900757 3
      vertex 2.2877840995788574 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 0 3
      vertex 5.676476001739502 3.792592763900757 3
      vertex 5.375 3.917468309402466 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 0 3
      vertex 5.375 3.917468309402466 3
      vertex 5.116116523742676 4.116116523742676 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.116116523742676 4.116116523742676 3
      vertex 4.917468070983887 4.375 3
      vertex 2.2877840995788574 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 0 3
      vertex 4.917468070983887 4.375 3
      vertex 4.792592525482178 4.676476001739502 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.752613544464111 61.03649139404297 3
      vertex -6.752613544464111 22.9635066986084 3
      vertex -6.457937240600586 60.63090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 60.63090515136719 3
      vertex -6.752613544464111 22.9635066986084 3
      vertex -6.457937240600586 23.369094848632812 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.457937240600586 60.63090515136719 3
      vertex -6.457937240600586 23.369094848632812 3
      vertex -6.071653366088867 60.311344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.071653366088867 60.311344146728516 3
      vertex -6.457937240600586 23.369094848632812 3
      vertex -6.071653366088867 23.688655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -6.071653366088867 60.311344146728516 3
      vertex -6.071653366088867 23.688655853271484 3
      vertex -5.6180338859558105 60.09788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5.6180338859558105 60.09788513183594 3
      vertex -6.071653366088867 23.688655853271484 3
      vertex -5.6180338859558105 23.90211296081543 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5.6180338859558105 60.09788513183594 3
      vertex -5.6180338859558105 23.90211296081543 3
      vertex 4.792592525482178 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex -5.6180338859558105 23.90211296081543 3
      vertex -5.12558126449585 23.99605369567871 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex -5.12558126449585 23.99605369567871 3
      vertex 4.75 35 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 35 3
      vertex -5.12558126449585 23.99605369567871 3
      vertex -4.625237464904785 23.964574813842773 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 35 3
      vertex -4.625237464904785 23.964574813842773 3
      vertex -4.148441314697266 23.809654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.75 35 3
      vertex -4.148441314697266 23.809654235839844 3
      vertex 4.792592525482178 34.676475524902344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 34.676475524902344 3
      vertex -4.148441314697266 23.809654235839844 3
      vertex -3.725152015686035 23.541027069091797 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 34.676475524902344 3
      vertex -3.725152015686035 23.541027069091797 3
      vertex 4.917468070983887 34.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.917468070983887 34.375 3
      vertex -3.725152015686035 23.541027069091797 3
      vertex -3.3819661140441895 23.17557144165039 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.917468070983887 34.375 3
      vertex -3.3819661140441895 23.17557144165039 3
      vertex 5.116116523742676 34.11611557006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.116116523742676 34.11611557006836 3
      vertex -3.3819661140441895 23.17557144165039 3
      vertex -3.1404471397399902 22.736249923706055 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.116116523742676 34.11611557006836 3
      vertex -3.1404471397399902 22.736249923706055 3
      vertex 5.375 33.9174690246582 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 33.9174690246582 3
      vertex -3.1404471397399902 22.736249923706055 3
      vertex -3.015770673751831 22.25066566467285 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 33.9174690246582 3
      vertex -3.015770673751831 22.25066566467285 3
      vertex 5.676476001739502 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 25.07151985168457 49.78125762939453 3
      vertex 34.7925910949707 35.323524475097656 3
      vertex 26.15249252319336 50.281368255615234 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.15249252319336 50.281368255615234 3
      vertex 34.7925910949707 35.323524475097656 3
      vertex 34.9174690246582 35.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 26.15249252319336 50.281368255615234 3
      vertex 34.9174690246582 35.625 3
      vertex 27.173057556152344 50.89542007446289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.173057556152344 50.89542007446289 3
      vertex 34.9174690246582 35.625 3
      vertex 35.11611557006836 35.88388442993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 27.173057556152344 50.89542007446289 3
      vertex 35.11611557006836 35.88388442993164 3
      vertex 34.264495849609375 50.13090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.264495849609375 50.13090515136719 3
      vertex 35.11611557006836 35.88388442993164 3
      vertex 34.650779724121094 49.811344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.650779724121094 49.811344146728516 3
      vertex 35.11611557006836 35.88388442993164 3
      vertex 35.375 36.0825309753418 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.650779724121094 49.811344146728516 3
      vertex 35.375 36.0825309753418 3
      vertex 35.10439682006836 49.59788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.10439682006836 49.59788513183594 3
      vertex 35.375 36.0825309753418 3
      vertex 35.676475524902344 36.2074089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.10439682006836 49.59788513183594 3
      vertex 35.676475524902344 36.2074089050293 3
      vertex 35.59685134887695 49.50394821166992 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.59685134887695 49.50394821166992 3
      vertex 35.676475524902344 36.2074089050293 3
      vertex 36 36.25 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.59685134887695 49.50394821166992 3
      vertex 36 36.25 3
      vertex 36.09719467163086 49.53542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.09719467163086 49.53542709350586 3
      vertex 36 36.25 3
      vertex 36.323524475097656 36.2074089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.09719467163086 49.53542709350586 3
      vertex 36.323524475097656 36.2074089050293 3
      vertex 36.57398986816406 49.690345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.57398986816406 49.690345764160156 3
      vertex 36.323524475097656 36.2074089050293 3
      vertex 36.625 36.0825309753418 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.57398986816406 49.690345764160156 3
      vertex 36.625 36.0825309753418 3
      vertex 36.99728012084961 49.9589729309082 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.99728012084961 49.9589729309082 3
      vertex 36.625 36.0825309753418 3
      vertex 36.88388442993164 35.88388442993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.99728012084961 49.9589729309082 3
      vertex 36.88388442993164 35.88388442993164 3
      vertex 37.3404655456543 50.32442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.3404655456543 50.32442855834961 3
      vertex 36.88388442993164 35.88388442993164 3
      vertex 37.0825309753418 35.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.3404655456543 50.32442855834961 3
      vertex 37.0825309753418 35.625 3
      vertex 37.58198547363281 50.76375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.58198547363281 50.76375198364258 3
      vertex 37.0825309753418 35.625 3
      vertex 37.2074089050293 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 37.58198547363281 50.76375198364258 3
      vertex 37.2074089050293 35.323524475097656 3
      vertex 47.37476348876953 60.03542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.37476348876953 60.03542709350586 3
      vertex 37.2074089050293 35.323524475097656 3
      vertex 47.37476348876953 23.964574813842773 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.37476348876953 60.03542709350586 3
      vertex 47.37476348876953 23.964574813842773 3
      vertex 47.851558685302734 23.809654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.37476348876953 23.964574813842773 3
      vertex 37.2074089050293 35.323524475097656 3
      vertex 46.874420166015625 23.99605369567871 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 23.99605369567871 3
      vertex 37.2074089050293 35.323524475097656 3
      vertex 37.25 35 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 23.99605369567871 3
      vertex 37.25 35 3
      vertex 46.38196563720703 23.90211296081543 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.38196563720703 23.90211296081543 3
      vertex 37.25 35 3
      vertex 37.2074089050293 34.676475524902344 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.38196563720703 23.90211296081543 3
      vertex 37.2074089050293 34.676475524902344 3
      vertex 45.9283447265625 23.688655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.9283447265625 23.688655853271484 3
      vertex 37.2074089050293 34.676475524902344 3
      vertex 45.54206085205078 23.369094848632812 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 23.369094848632812 3
      vertex 37.2074089050293 34.676475524902344 3
      vertex 37.0825309753418 34.375 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 23.369094848632812 3
      vertex 37.0825309753418 34.375 3
      vertex 45.24738693237305 22.9635066986084 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 22.9635066986084 3
      vertex 37.0825309753418 34.375 3
      vertex 36.88388442993164 34.11611557006836 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 22.9635066986084 3
      vertex 36.88388442993164 34.11611557006836 3
      vertex 36.625 33.9174690246582 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 22.9635066986084 3
      vertex 36.625 33.9174690246582 3
      vertex 45.06283187866211 22.497379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 22.497379302978516 3
      vertex 36.625 33.9174690246582 3
      vertex 36.323524475097656 33.7925910949707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.625 6.082531929016113 3
      vertex 36.88388442993164 5.883883476257324 3
      vertex 45.24738693237305 21.0364933013916 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 21.0364933013916 3
      vertex 36.88388442993164 5.883883476257324 3
      vertex 45.54206085205078 20.630905151367188 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 20.630905151367188 3
      vertex 36.88388442993164 5.883883476257324 3
      vertex 37.0825309753418 5.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.88388442993164 4.116116523742676 3
      vertex 36.625 3.917468309402466 3
      vertex 39.712215423583984 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 36.625 3.917468309402466 3
      vertex 36.323524475097656 3.792592763900757 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 36.323524475097656 3.792592763900757 3
      vertex 36 3.75 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36 3.75 3
      vertex 35.676475524902344 3.792592763900757 3
      vertex 39.712215423583984 0 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 35.676475524902344 3.792592763900757 3
      vertex 35.375 3.917468309402466 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 0 3
      vertex 35.375 3.917468309402466 3
      vertex 6.625 3.917468309402466 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -5.6180338859558105 63.90211486816406 3
      vertex -5.12558126449585 63.99605178833008 3
      vertex -9.447736740112305 67.93885040283203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -9.447736740112305 67.93885040283203 3
      vertex -5.12558126449585 63.99605178833008 3
      vertex -4.625237464904785 63.96457290649414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.725152015686035 63.5410270690918 3
      vertex -3.3819661140441895 63.17557144165039 3
      vertex -1.1599526405334473 82.02808380126953 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -1.1599526405334473 82.02808380126953 3
      vertex -3.3819661140441895 63.17557144165039 3
      vertex 11.016670227050781 64.61878204345703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex -3.3819661140441895 63.17557144165039 3
      vertex -3.1404471397399902 62.73624801635742 3
      vertex 11.016670227050781 64.61878204345703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 11.016670227050781 64.61878204345703 3
      vertex -3.1404471397399902 62.73624801635742 3
      vertex 10.575815200805664 63.5123176574707 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.575815200805664 63.5123176574707 3
      vertex -3.1404471397399902 62.73624801635742 3
      vertex 10.257173538208008 62.36467361450195 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.257173538208008 62.36467361450195 3
      vertex -3.1404471397399902 62.73624801635742 3
      vertex -3.015770673751831 62.250667572021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.257173538208008 62.36467361450195 3
      vertex -3.015770673751831 62.250667572021484 3
      vertex 10.064482688903809 61.189308166503906 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 61.189308166503906 3
      vertex -3.015770673751831 62.250667572021484 3
      vertex -3.015770673751831 61.749332427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 61.189308166503906 3
      vertex -3.015770673751831 61.749332427978516 3
      vertex 5.659533977508545 53.40211486816406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.659533977508545 53.40211486816406 3
      vertex -3.015770673751831 61.749332427978516 3
      vertex 5.205914497375488 53.188655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.205914497375488 53.188655853271484 3
      vertex -3.015770673751831 61.749332427978516 3
      vertex 4.819631099700928 52.86909484863281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.819631099700928 52.86909484863281 3
      vertex -3.015770673751831 61.749332427978516 3
      vertex -3.1404471397399902 61.26375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.819631099700928 52.86909484863281 3
      vertex -3.1404471397399902 61.26375198364258 3
      vertex 4.524954795837402 52.46350860595703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.524954795837402 52.46350860595703 3
      vertex -3.1404471397399902 61.26375198364258 3
      vertex -3.3819661140441895 60.82442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.524954795837402 52.46350860595703 3
      vertex -3.3819661140441895 60.82442855834961 3
      vertex 4.340401649475098 51.997379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.340401649475098 51.997379302978516 3
      vertex -3.3819661140441895 60.82442855834961 3
      vertex -3.725152015686035 60.4589729309082 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.340401649475098 51.997379302978516 3
      vertex -3.725152015686035 60.4589729309082 3
      vertex -4.148441314697266 60.190345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.340401649475098 51.997379302978516 3
      vertex -4.148441314697266 60.190345764160156 3
      vertex 4.277568340301514 51.5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.277568340301514 51.5 3
      vertex -4.148441314697266 60.190345764160156 3
      vertex -4.625237464904785 60.03542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.277568340301514 51.5 3
      vertex -4.625237464904785 60.03542709350586 3
      vertex 4.340401649475098 51.002620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.340401649475098 51.002620697021484 3
      vertex -4.625237464904785 60.03542709350586 3
      vertex -5.12558126449585 60.00394821166992 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.340401649475098 51.002620697021484 3
      vertex -5.12558126449585 60.00394821166992 3
      vertex 4.792592525482178 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex -5.12558126449585 60.00394821166992 3
      vertex -5.6180338859558105 60.09788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 61.189308166503906 3
      vertex 5.659533977508545 53.40211486816406 3
      vertex 10 60 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10 60 3
      vertex 5.659533977508545 53.40211486816406 3
      vertex 6.151987075805664 53.49605178833008 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10 60 3
      vertex 6.151987075805664 53.49605178833008 3
      vertex 10.064482688903809 58.810691833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 58.810691833496094 3
      vertex 6.151987075805664 53.49605178833008 3
      vertex 6.6523308753967285 53.46457290649414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.064482688903809 58.810691833496094 3
      vertex 6.6523308753967285 53.46457290649414 3
      vertex 10.257173538208008 57.63532638549805 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.257173538208008 57.63532638549805 3
      vertex 6.6523308753967285 53.46457290649414 3
      vertex 7.12912654876709 53.309654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 10.257173538208008 57.63532638549805 3
      vertex 7.12912654876709 53.309654235839844 3
      vertex 7.5524163246154785 53.0410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 11.574570655822754 65.67108917236328 3
      vertex 12.242976188659668 66.65691375732422 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 12.242976188659668 66.65691375732422 3
      vertex 13.014049530029297 67.564697265625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 13.014049530029297 67.564697265625 3
      vertex 13.878750801086426 68.38378143310547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 13.878750801086426 68.38378143310547 3
      vertex 14.826942443847656 69.10457611083984 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 14.826942443847656 69.10457611083984 3
      vertex 19.062833786010742 77.49738311767578 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 19.062833786010742 77.49738311767578 3
      vertex 19.247386932373047 77.96350860595703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.062833786010742 77.49738311767578 3
      vertex 14.826942443847656 69.10457611083984 3
      vertex 19 77 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19 77 3
      vertex 14.826942443847656 69.10457611083984 3
      vertex 15.84750747680664 69.71863555908203 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19 77 3
      vertex 15.84750747680664 69.71863555908203 3
      vertex 19.062833786010742 76.50261688232422 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.062833786010742 76.50261688232422 3
      vertex 15.84750747680664 69.71863555908203 3
      vertex 16.92848014831543 70.21874237060547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.062833786010742 76.50261688232422 3
      vertex 16.92848014831543 70.21874237060547 3
      vertex 19.247386932373047 76.03649139404297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.247386932373047 76.03649139404297 3
      vertex 16.92848014831543 70.21874237060547 3
      vertex 18.057188034057617 70.59905242919922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.247386932373047 76.03649139404297 3
      vertex 18.057188034057617 70.59905242919922 3
      vertex 19.542062759399414 75.63090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.542062759399414 75.63090515136719 3
      vertex 18.057188034057617 70.59905242919922 3
      vertex 19.22039794921875 70.85509490966797 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.542062759399414 75.63090515136719 3
      vertex 19.22039794921875 70.85509490966797 3
      vertex 19.928346633911133 75.31134796142578 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.928346633911133 75.31134796142578 3
      vertex 19.22039794921875 70.85509490966797 3
      vertex 20.38196563720703 75.09788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.38196563720703 75.09788513183594 3
      vertex 19.22039794921875 70.85509490966797 3
      vertex 20.40447235107422 70.9838638305664 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.38196563720703 75.09788513183594 3
      vertex 20.40447235107422 70.9838638305664 3
      vertex 20.874418258666992 75.00394439697266 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.874418258666992 75.00394439697266 3
      vertex 20.40447235107422 70.9838638305664 3
      vertex 21.59552764892578 70.9838638305664 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.874418258666992 75.00394439697266 3
      vertex 21.59552764892578 70.9838638305664 3
      vertex 21.37476348876953 75.0354232788086 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 21.37476348876953 75.0354232788086 3
      vertex 21.59552764892578 70.9838638305664 3
      vertex 21.851558685302734 75.19034576416016 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 21.851558685302734 75.19034576416016 3
      vertex 21.59552764892578 70.9838638305664 3
      vertex 22.77960205078125 70.85509490966797 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 21.851558685302734 75.19034576416016 3
      vertex 22.77960205078125 70.85509490966797 3
      vertex 22.27484703063965 75.45897674560547 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 22.27484703063965 75.45897674560547 3
      vertex 22.77960205078125 70.85509490966797 3
      vertex 23.942811965942383 70.59905242919922 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 62.96350860595703 3
      vertex 31.424184799194336 63.5123176574707 3
      vertex 45.06283187866211 62.497379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 62.497379302978516 3
      vertex 31.424184799194336 63.5123176574707 3
      vertex 31.742826461791992 62.36467361450195 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 62.497379302978516 3
      vertex 31.742826461791992 62.36467361450195 3
      vertex 45 62 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 62 3
      vertex 31.742826461791992 62.36467361450195 3
      vertex 31.935518264770508 61.189308166503906 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 62 3
      vertex 31.935518264770508 61.189308166503906 3
      vertex 36.57398986816406 53.309654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.57398986816406 53.309654235839844 3
      vertex 31.935518264770508 61.189308166503906 3
      vertex 32 60 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.57398986816406 53.309654235839844 3
      vertex 32 60 3
      vertex 36.09719467163086 53.46457290649414 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 36.09719467163086 53.46457290649414 3
      vertex 32 60 3
      vertex 35.59685134887695 53.49605178833008 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.59685134887695 53.49605178833008 3
      vertex 32 60 3
      vertex 31.935518264770508 58.810691833496094 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.59685134887695 53.49605178833008 3
      vertex 31.935518264770508 58.810691833496094 3
      vertex 35.10439682006836 53.40211486816406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.10439682006836 53.40211486816406 3
      vertex 31.935518264770508 58.810691833496094 3
      vertex 31.742826461791992 57.63532638549805 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 35.10439682006836 53.40211486816406 3
      vertex 31.742826461791992 57.63532638549805 3
      vertex 34.650779724121094 53.188655853271484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.650779724121094 53.188655853271484 3
      vertex 31.742826461791992 57.63532638549805 3
      vertex 31.424184799194336 56.4876823425293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.650779724121094 53.188655853271484 3
      vertex 31.424184799194336 56.4876823425293 3
      vertex 34.264495849609375 52.86909484863281 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.264495849609375 52.86909484863281 3
      vertex 31.424184799194336 56.4876823425293 3
      vertex 30.98332977294922 55.381221771240234 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.264495849609375 52.86909484863281 3
      vertex 30.98332977294922 55.381221771240234 3
      vertex 33.969818115234375 52.46350860595703 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.969818115234375 52.46350860595703 3
      vertex 30.98332977294922 55.381221771240234 3
      vertex 33.7852668762207 51.997379302978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.7852668762207 51.997379302978516 3
      vertex 30.98332977294922 55.381221771240234 3
      vertex 30.42542839050293 54.32890701293945 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.7852668762207 51.997379302978516 3
      vertex 30.42542839050293 54.32890701293945 3
      vertex 33.72243118286133 51.5 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.72243118286133 51.5 3
      vertex 30.42542839050293 54.32890701293945 3
      vertex 29.757022857666016 53.343082427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.72243118286133 51.5 3
      vertex 29.757022857666016 53.343082427978516 3
      vertex 33.7852668762207 51.002620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.7852668762207 51.002620697021484 3
      vertex 29.757022857666016 53.343082427978516 3
      vertex 28.985950469970703 52.435306549072266 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.7852668762207 51.002620697021484 3
      vertex 28.985950469970703 52.435306549072266 3
      vertex 33.969818115234375 50.53649139404297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.969818115234375 50.53649139404297 3
      vertex 28.985950469970703 52.435306549072266 3
      vertex 28.121248245239258 51.61621856689453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 33.969818115234375 50.53649139404297 3
      vertex 28.121248245239258 51.61621856689453 3
      vertex 34.264495849609375 50.13090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 34.264495849609375 50.13090515136719 3
      vertex 28.121248245239258 51.61621856689453 3
      vertex 27.173057556152344 50.89542007446289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 16.92848014831543 49.78125762939453 3
      vertex 15.84750747680664 50.281368255615234 3
      vertex 7.207407474517822 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.207407474517822 35.323524475097656 3
      vertex 15.84750747680664 50.281368255615234 3
      vertex 7.082531929016113 35.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 35.625 3
      vertex 15.84750747680664 50.281368255615234 3
      vertex 14.826942443847656 50.89542007446289 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.082531929016113 35.625 3
      vertex 14.826942443847656 50.89542007446289 3
      vertex 6.883883476257324 35.88388442993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 35.88388442993164 3
      vertex 14.826942443847656 50.89542007446289 3
      vertex 7.5524163246154785 49.9589729309082 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 35.88388442993164 3
      vertex 7.5524163246154785 49.9589729309082 3
      vertex 7.12912654876709 49.690345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.5524163246154785 49.9589729309082 3
      vertex 14.826942443847656 50.89542007446289 3
      vertex 7.895602226257324 50.32442855834961 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.895602226257324 50.32442855834961 3
      vertex 14.826942443847656 50.89542007446289 3
      vertex 13.878750801086426 51.61621856689453 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.895602226257324 50.32442855834961 3
      vertex 13.878750801086426 51.61621856689453 3
      vertex 8.137121200561523 50.76375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.137121200561523 50.76375198364258 3
      vertex 13.878750801086426 51.61621856689453 3
      vertex 13.014049530029297 52.435306549072266 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.137121200561523 50.76375198364258 3
      vertex 13.014049530029297 52.435306549072266 3
      vertex 8.261797904968262 51.249332427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.261797904968262 51.249332427978516 3
      vertex 13.014049530029297 52.435306549072266 3
      vertex 12.242976188659668 53.343082427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.261797904968262 51.249332427978516 3
      vertex 12.242976188659668 53.343082427978516 3
      vertex 8.261797904968262 51.750667572021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.261797904968262 51.750667572021484 3
      vertex 12.242976188659668 53.343082427978516 3
      vertex 11.574570655822754 54.32890701293945 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.261797904968262 51.750667572021484 3
      vertex 11.574570655822754 54.32890701293945 3
      vertex 8.137121200561523 52.23624801635742 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.137121200561523 52.23624801635742 3
      vertex 11.574570655822754 54.32890701293945 3
      vertex 11.016670227050781 55.381221771240234 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 8.137121200561523 52.23624801635742 3
      vertex 11.016670227050781 55.381221771240234 3
      vertex 7.895602226257324 52.67557144165039 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.895602226257324 52.67557144165039 3
      vertex 11.016670227050781 55.381221771240234 3
      vertex 10.575815200805664 56.4876823425293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.895602226257324 52.67557144165039 3
      vertex 10.575815200805664 56.4876823425293 3
      vertex 7.5524163246154785 53.0410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 7.5524163246154785 53.0410270690918 3
      vertex 10.575815200805664 56.4876823425293 3
      vertex 10.257173538208008 57.63532638549805 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.883883476257324 35.88388442993164 3
      vertex 7.12912654876709 49.690345764160156 3
      vertex 6.625 36.0825309753418 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 36.0825309753418 3
      vertex 7.12912654876709 49.690345764160156 3
      vertex 6.6523308753967285 49.53542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.625 36.0825309753418 3
      vertex 6.6523308753967285 49.53542709350586 3
      vertex 6.323523998260498 36.2074089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6.323523998260498 36.2074089050293 3
      vertex 6.6523308753967285 49.53542709350586 3
      vertex 6 36.25 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 36.25 3
      vertex 6.6523308753967285 49.53542709350586 3
      vertex 6.151987075805664 49.50394821166992 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 6 36.25 3
      vertex 6.151987075805664 49.50394821166992 3
      vertex 5.676476001739502 36.2074089050293 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 36.2074089050293 3
      vertex 6.151987075805664 49.50394821166992 3
      vertex 5.659533977508545 49.59788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.676476001739502 36.2074089050293 3
      vertex 5.659533977508545 49.59788513183594 3
      vertex 5.375 36.0825309753418 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 36.0825309753418 3
      vertex 5.659533977508545 49.59788513183594 3
      vertex 5.205914497375488 49.811344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.375 36.0825309753418 3
      vertex 5.205914497375488 49.811344146728516 3
      vertex 5.116116523742676 35.88388442993164 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.116116523742676 35.88388442993164 3
      vertex 5.205914497375488 49.811344146728516 3
      vertex 4.819631099700928 50.13090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 5.116116523742676 35.88388442993164 3
      vertex 4.819631099700928 50.13090515136719 3
      vertex 4.917468070983887 35.625 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.917468070983887 35.625 3
      vertex 4.819631099700928 50.13090515136719 3
      vertex 4.524954795837402 50.53649139404297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.917468070983887 35.625 3
      vertex 4.524954795837402 50.53649139404297 3
      vertex 4.792592525482178 35.323524475097656 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 4.792592525482178 35.323524475097656 3
      vertex 4.524954795837402 50.53649139404297 3
      vertex 4.340401649475098 51.002620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45 62 3
      vertex 36.57398986816406 53.309654235839844 3
      vertex 45.06283187866211 61.502620697021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 61.502620697021484 3
      vertex 36.57398986816406 53.309654235839844 3
      vertex 36.99728012084961 53.0410270690918 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 61.502620697021484 3
      vertex 36.99728012084961 53.0410270690918 3
      vertex 37.3404655456543 52.67557144165039 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.06283187866211 61.502620697021484 3
      vertex 37.3404655456543 52.67557144165039 3
      vertex 45.24738693237305 61.03649139404297 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 61.03649139404297 3
      vertex 37.3404655456543 52.67557144165039 3
      vertex 37.58198547363281 52.23624801635742 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.24738693237305 61.03649139404297 3
      vertex 37.58198547363281 52.23624801635742 3
      vertex 45.54206085205078 60.63090515136719 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 60.63090515136719 3
      vertex 37.58198547363281 52.23624801635742 3
      vertex 37.706661224365234 51.750667572021484 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.54206085205078 60.63090515136719 3
      vertex 37.706661224365234 51.750667572021484 3
      vertex 45.9283447265625 60.311344146728516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 45.9283447265625 60.311344146728516 3
      vertex 37.706661224365234 51.750667572021484 3
      vertex 46.38196563720703 60.09788513183594 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.38196563720703 60.09788513183594 3
      vertex 37.706661224365234 51.750667572021484 3
      vertex 37.706661224365234 51.249332427978516 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.38196563720703 60.09788513183594 3
      vertex 37.706661224365234 51.249332427978516 3
      vertex 46.874420166015625 60.00394821166992 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 60.00394821166992 3
      vertex 37.706661224365234 51.249332427978516 3
      vertex 37.58198547363281 50.76375198364258 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 46.874420166015625 60.00394821166992 3
      vertex 37.58198547363281 50.76375198364258 3
      vertex 47.37476348876953 60.03542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 19.247386932373047 77.96350860595703 3
      vertex 19.542062759399414 78.36909484863281 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 19.542062759399414 78.36909484863281 3
      vertex 19.928346633911133 78.68865203857422 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 2.2877840995788574 84 3
      vertex 19.928346633911133 78.68865203857422 3
      vertex 20.38196563720703 78.90211486816406 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 20.38196563720703 78.90211486816406 3
      vertex 20.874418258666992 78.99605560302734 3
      vertex 2.2877840995788574 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 21.851558685302734 78.80965423583984 3
      vertex 22.27484703063965 78.54102325439453 3
      vertex 39.712215423583984 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 84 3
      vertex 22.27484703063965 78.54102325439453 3
      vertex 22.61803436279297 78.17556762695312 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 39.712215423583984 84 3
      vertex 22.61803436279297 78.17556762695312 3
      vertex 22.85955238342285 77.73625183105469 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 22.85955238342285 77.73625183105469 3
      vertex 22.984230041503906 77.25066375732422 3
      vertex 39.712215423583984 84 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.61803436279297 23.17557144165039 3
      vertex 48.27484893798828 60.4589729309082 3
      vertex 48.27484893798828 23.541027069091797 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 23.541027069091797 3
      vertex 48.27484893798828 60.4589729309082 3
      vertex 47.851558685302734 60.190345764160156 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 48.27484893798828 23.541027069091797 3
      vertex 47.851558685302734 60.190345764160156 3
      vertex 47.851558685302734 23.809654235839844 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.851558685302734 23.809654235839844 3
      vertex 47.851558685302734 60.190345764160156 3
      vertex 47.37476348876953 60.03542709350586 3
    endloop
  endfacet
  facet normal 0 0 1
    outer loop
      vertex 47.37476348876953 20.035425186157227 3
      vertex 46.874420166015625 20.00394630432129 3
      vertex 51.44773864746094 16.061153411865234 3
    endloop
  endfacet
endsolid STLB ATF 12.14.0.127 COLOR=                                                      

  ```

## Next Steps
- Focusing on further experimentation in the next session.
- Continuing development and implementation of the Lidar technology.
