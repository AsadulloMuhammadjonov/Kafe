object FormOmbor: TFormOmbor
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'FormOmbor'
  ClientHeight = 624
  ClientWidth = 996
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Times New Roman'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 26
  object DBGrid1: TDBGrid
    Left = 0
    Top = 192
    Width = 996
    Height = 432
    Align = alBottom
    DataSource = DataModule2.DataSourceMenyu
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -27
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    OnDblClick = DBGrid1DblClick
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'id'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 299
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Miqdor'
        Title.Alignment = taCenter
        Width = 180
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Narxi'
        Title.Alignment = taCenter
        Width = 262
        Visible = True
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Summa'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'Birligi'
        Title.Alignment = taCenter
        Width = 212
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 996
    Height = 192
    Align = alClient
    TabOrder = 1
    ExplicitTop = -16
    ExplicitWidth = 1167
    ExplicitHeight = 194
    object Button1: TButton
      Left = 208
      Top = 14
      Width = 185
      Height = 74
      Caption = 'Qo'#39'shish'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 399
      Top = 14
      Width = 185
      Height = 74
      Caption = 'O'#39'zgartirish'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 590
      Top = 14
      Width = 185
      Height = 74
      Caption = 'O'#39'chirish'
      TabOrder = 2
      OnClick = Button3Click
    end
    object LabeledEdit1: TLabeledEdit
      Left = 0
      Top = 125
      Width = 997
      Height = 34
      Alignment = taCenter
      EditLabel.Width = 229
      EditLabel.Height = 26
      EditLabel.Caption = 'Nomi bo'#39'yicha qidiruv'
      TabOrder = 3
      TextHint = 'Nomi o'#39'yicha qidiruv'
      OnChange = LabeledEdit1Change
    end
    object Button4: TButton
      Left = 1037
      Top = 0
      Width = 130
      Height = 49
      Caption = 'Chiqish'
      TabOrder = 4
      OnClick = Button4Click
    end
  end
end
