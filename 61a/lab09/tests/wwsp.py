test = {
  'name': 'What would Scheme print?',
  'points': 0,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          scm> (+ 3 5)
          705c779aa26cefdacfc628f4e6fe0545
          # locked
          scm> (- 10 4)
          5dd2f13fb4c4fd724ede9fca5662f722
          # locked
          scm> (* 7 6)
          b8c8f306d37b4f5292c343f61a555b05
          # locked
          scm> (/ 28 2)
          51b9091087ca8f971d0831c4b8a4ad4a
          # locked
          scm> (+ 1 2 3 4)
          1e136d20c59cd9c04d31c4f1f62f6c10
          # locked
          scm> (/ 8 2 2)
          242a6d3d4ed1b1d1292acd307083f4e0
          # locked
          scm> (quotient 29 5)
          a1bce68344d05cff1822ab9ad453b1cc
          # locked
          scm> (remainder 29 5)
          eb5438773fa3774b23f3a524c49c4eb1
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          scm> (= 1 3)      ; True or False?
          f2bf0507fb265c0e11f3ac62de7d23dd
          # locked
          scm> (> 1 3)
          f2bf0507fb265c0e11f3ac62de7d23dd
          # locked
          scm> (< 1 3)
          7ac1449159889a2d4fb8c48a1bb9fe87
          # locked
          scm> (<= -1 -1)
          7ac1449159889a2d4fb8c48a1bb9fe87
          # locked
          scm> (or True False)
          7ac1449159889a2d4fb8c48a1bb9fe87
          # locked
          scm> (and True True)
          7ac1449159889a2d4fb8c48a1bb9fe87
          # locked
          scm> (and True False (/ 1 0))     ; Short-circuiting
          f2bf0507fb265c0e11f3ac62de7d23dd
          # locked
          scm> (not True)
          f2bf0507fb265c0e11f3ac62de7d23dd
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          scm> (define x 3)      ; Defining variables
          76d02e0594622e8d16b679732048168c
          # locked
          scm> x
          aa358e49beb94f999014e1c16f14faf8
          # locked
          scm> (define y (+ x 4))
          985fbf7e3438960a5e1bedf59326b042
          # locked
          scm> y
          0e3f82029deb84dcfa40fd5281506f50
          # locked
          """,
          'hidden': False,
          'locked': True
        }
      ],
      'scored': True,
      'setup': '',
      'teardown': '',
      'type': 'scheme'
    }
  ]
}