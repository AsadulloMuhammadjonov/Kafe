object FormKategoriya: TFormKategoriya
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormKategoriya'
  ClientHeight = 581
  ClientWidth = 400
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 29
  object DBGrid1: TDBGrid
    Left = 0
    Top = 253
    Width = 400
    Height = 328
    Align = alBottom
    DataSource = DataModule2.DataSourceKategoriya
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -24
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    Columns = <
      item
        Expanded = False
        FieldName = 'id'
        Visible = False
      end
      item
        Alignment = taCenter
        ButtonStyle = cbsNone
        Expanded = False
        FieldName = 'Nomi'
        Title.Alignment = taCenter
        Width = 382
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 24
    Top = 88
    Width = 153
    Height = 57
    Caption = 'Saqlash'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 116
    Top = 160
    Width = 154
    Height = 57
    Caption = 'O'#39'chirish'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 207
    Top = 88
    Width = 164
    Height = 57
    Caption = 'O'#39'zgartirish'
    TabOrder = 3
    OnClick = Button3Click
  end
  object LabeledEdit1: TLabeledEdit
    Left = 89
    Top = 36
    Width = 209
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 64
    EditLabel.Height = 29
    EditLabel.Caption = 'Nomi'
    TabOrder = 4
  end
end
