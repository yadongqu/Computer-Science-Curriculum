test = {
  'name': 'cube',
  'points': 1,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          scm> (cube 2)
          705c779aa26cefdacfc628f4e6fe0545
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          scm> (cube 3)
          20003cf15af46c423e717569612a6d51
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          scm> (cube 1)
          d912fc844d1dbaeea8a84b3ec8b315bc
          # locked
          """,
          'hidden': False,
          'locked': True
        }
      ],
      'scored': True,
      'setup': r"""
      scm> (load 'lab09)
      """,
      'teardown': '',
      'type': 'scheme'
    }
  ]
}